#!/bin/bash

# STONE-SIM Test Runner Script
# Manages and executes individual test suites with Verilator backend

set -e  # Exit on any error

# Configuration
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
TEST_DIR="src/test/scala"
CONFIG_FILE="$(dirname "${BASH_SOURCE[0]}")/test_config.txt"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m' # No Color

# Auto-discover test files and descriptions
declare -A TEST_FILES
declare -A TEST_DESCRIPTIONS

# Load configuration
load_config() {
    if [[ -f "$CONFIG_FILE" ]]; then
        # Source the config file but ignore comments and empty lines
        while IFS='=' read -r key value; do
            # Skip comments and empty lines
            [[ $key =~ ^[[:space:]]*# ]] && continue
            [[ -z $key ]] && continue
            # Remove whitespace
            key=$(echo "$key" | xargs)
            value=$(echo "$value" | xargs)
            [[ -n $key && -n $value ]] && export "$key=$value"
        done < "$CONFIG_FILE"
        
        if [[ "${VERBOSE:-false}" == "true" ]]; then
            print_info "Loaded configuration from $CONFIG_FILE"
        fi
    else
        print_warning "Config file not found: $CONFIG_FILE"
        print_info "Using default values"
    fi
}

# Get test cycles for specific test type
get_test_cycles() {
    local test_name="$1"
    
    # Check for global override first
    if [[ -n "${GLOBAL_CYCLES:-}" ]]; then
        echo "$GLOBAL_CYCLES"
        return
    fi
    
    # Map test names to cycle variables
    case "$test_name" in
        "basic"|"basicsoc") echo "${BASIC_CYCLES:-5000}" ;;
        "cpu"|"cpuonly") echo "${CPU_CYCLES:-3000}" ;;
        "memory"|"memoryonly") echo "${MEMORY_CYCLES:-2000}" ;;
        "performance") echo "${PERFORMANCE_CYCLES:-10000}" ;;
        "stress") echo "${STRESS_CYCLES:-50000}" ;;
        "interconnect") echo "${INTERCONNECT_CYCLES:-1000}" ;;
        "simtop") echo "${SIMTOP_CYCLES:-8000}" ;;
        *) echo "1000" ;;  # Default fallback
    esac
}

# Function to discover and parse test files
discover_tests() {
    local test_files_path="$PROJECT_ROOT/$TEST_DIR"
    
    # Clear existing arrays
    TEST_FILES=()
    TEST_DESCRIPTIONS=()
    
    # Find all .scala files in test directory
    for test_file in "$test_files_path"/*.scala; do
        if [[ -f "$test_file" ]]; then
            # Extract class name (filename without .scala extension)
            local class_name=$(basename "$test_file" .scala)
            
            # Generate short name by removing common suffixes
            local short_name=$(echo "$class_name" | sed -E 's/(Test|OnlyTest)$//' | tr '[:upper:]' '[:lower:]')
            
            # Extract description from Scala file
            local description=""
            if [[ -f "$test_file" ]]; then
                # Look for "behavior of" statements first
                description=$(grep -E "behavior of" "$test_file" | head -1 | sed -E 's/.*behavior of\s+"([^"]+)".*/\1/' 2>/dev/null || echo "")
                
                # If no description found in behavior of, try /** comments
                if [[ -z "$description" ]]; then
                    description=$(grep -A 5 "/\*\*" "$test_file" | grep -E "^\s*\*\s*Tests for" | head -1 | sed -E 's/^\s*\*\s*Tests for\s*//' | sed -E 's/\s*including.*$//' 2>/dev/null || echo "")
                fi
                
                # Fallback to auto-generated description based on short name
                if [[ -z "$description" ]]; then
                    case "$short_name" in
                        "basicsoc"|"basic") description="Basic SoC functionality and instantiation" ;;
                        "cpuonly"|"cpu") description="CPU component and instruction execution" ;;
                        "memoryonly"|"memory") description="Memory system and cache operations" ;;
                        "simtop") description="Top-level simulation and integration" ;;
                        "performance") description="Performance benchmarking and stress tests" ;;
                        *) description="Test suite for $class_name" ;;
                    esac
                fi
            fi
            
            # Store in associative arrays
            TEST_FILES["$short_name"]="$class_name"
            TEST_DESCRIPTIONS["$short_name"]="$description"
        fi
    done
    
    # Debug: print discovered tests
    if [[ "${DEBUG:-}" == "1" ]]; then
        print_info "Discovered tests:"
        for key in "${!TEST_FILES[@]}"; do
            print_info "  $key -> ${TEST_FILES[$key]} (${TEST_DESCRIPTIONS[$key]})"
        done
    fi
}

print_header() {
    echo -e "${BLUE}=================================================="
    echo -e "STONE-SIM: SynThetic On-chip Network SIMulator"
    echo -e "Test Runner - Verilator Backend"
    echo -e "==================================================${NC}"
}

print_step() {
    echo -e "${CYAN}[STEP]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

print_info() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

# Load configuration and discover tests after functions are defined
load_config
discover_tests

# List available tests
list_tests() {
    echo -e "${BLUE}Available Test Suites:${NC}\n"
    
    for test_key in "${!TEST_FILES[@]}"; do
        local test_file="${TEST_FILES[$test_key]}"
        local description="${TEST_DESCRIPTIONS[$test_key]}"
        echo -e "  ${GREEN}$test_key${NC} - $test_file"
        echo -e "    $description"
        echo
    done
    
    echo -e "${BLUE}Special Commands:${NC}"
    echo -e "  ${GREEN}all${NC} - Run all test suites"
    echo -e "  ${GREEN}quick${NC} - Run basic + cpu + memory tests"
    echo -e "  ${GREEN}stress${NC} - Run performance and stress tests"
    echo
}

# Check if test file exists
check_test_exists() {
    local test_name="$1"
    local test_file="${TEST_FILES[$test_name]}"
    
    if [[ -z "$test_file" ]]; then
        print_error "Unknown test: $test_name"
        return 1
    fi
    
    local test_path="$PROJECT_ROOT/$TEST_DIR/${test_file}.scala"
    if [[ ! -f "$test_path" ]]; then
        print_error "Test file not found: $test_path"
        return 1
    fi
    
    return 0
}

# Run a specific test
run_test() {
    local test_name="$1"
    local test_file="${TEST_FILES[$test_name]}"
    local description="${TEST_DESCRIPTIONS[$test_name]}"
    local cycles=$(get_test_cycles "$test_name")
    
    print_step "Running $test_name test suite"
    print_info "Test: $test_file"
    print_info "Description: $description"
    print_info "Test cycles: $cycles"
    
    cd "$PROJECT_ROOT"
    
    local start_time=$(date +%s)
    
    if TEST_CYCLES="$cycles" sbt "testOnly $test_file" 2>&1; then
        local end_time=$(date +%s)
        local duration=$((end_time - start_time))
        print_success "$test_name test completed in ${duration}s"
        return 0
    else
        local end_time=$(date +%s)
        local duration=$((end_time - start_time))
        print_error "$test_name test failed after ${duration}s"
        return 1
    fi
}

# Run multiple tests
run_multiple_tests() {
    local test_list=("$@")
    local total_tests=${#test_list[@]}
    local passed_tests=0
    local failed_tests=0
    local start_time=$(date +%s)
    
    print_step "Running $total_tests test suites"
    
    for test_name in "${test_list[@]}"; do
        if check_test_exists "$test_name"; then
            echo
            if run_test "$test_name"; then
                ((passed_tests++))
            else
                ((failed_tests++))
            fi
        else
            ((failed_tests++))
        fi
    done
    
    local end_time=$(date +%s)
    local total_duration=$((end_time - start_time))
    
    echo
    print_step "Test Summary"
    echo -e "  Total tests: $total_tests"
    echo -e "  ${GREEN}Passed: $passed_tests${NC}"
    echo -e "  ${RED}Failed: $failed_tests${NC}"
    echo -e "  Total time: ${total_duration}s"
    
    if [[ $failed_tests -eq 0 ]]; then
        print_success "All tests passed!"
        return 0
    else
        print_error "$failed_tests test(s) failed"
        return 1
    fi
}

# Generate test report
generate_report() {
    local report_file="$PROJECT_ROOT/test_results.md"
    local timestamp=$(date '+%Y-%m-%d %H:%M:%S')
    
    print_step "Generating test report"
    
    cat > "$report_file" << EOF
# STONE-SIM Test Report

**Generated**: $timestamp  
**Backend**: Verilator  
**Project**: SynThetic On-chip Network SIMulator

## Available Test Suites

EOF
    
    for test_key in "${!TEST_FILES[@]}"; do
        local test_file="${TEST_FILES[$test_key]}"
        local description="${TEST_DESCRIPTIONS[$test_key]}"
        
        cat >> "$report_file" << EOF
### $test_key - $test_file
$description

\`\`\`bash
./scripts/test.sh $test_key
\`\`\`

EOF
    done
    
    cat >> "$report_file" << EOF
## Quick Commands

\`\`\`bash
# Run all tests
./scripts/test.sh all

# Run quick validation
./scripts/test.sh quick

# Run performance tests
./scripts/test.sh stress

# List available tests
./scripts/test.sh list
\`\`\`

## Test File Structure

EOF
    
    ls -la "$PROJECT_ROOT/$TEST_DIR"/*.scala | while read line; do
        echo "\`$line\`" >> "$report_file"
    done
    
    print_success "Test report generated: $report_file"
}

# Show interactive menu
show_interactive_menu() {
    clear
    print_header
    echo
    
    # Show current configuration
    echo -e "${CYAN}Current Configuration:${NC}"
    echo "  Basic tests: $(get_test_cycles "basic") cycles"
    echo "  CPU tests: $(get_test_cycles "cpu") cycles"
    echo "  Memory tests: $(get_test_cycles "memory") cycles"
    echo "  Performance tests: $(get_test_cycles "performance") cycles"
    echo "  Stress tests: $(get_test_cycles "stress") cycles"
    if [[ -n "${GLOBAL_CYCLES:-}" ]]; then
        echo -e "  ${YELLOW}Global override: $GLOBAL_CYCLES cycles${NC}"
    fi
    echo
    
    echo -e "${BLUE}Select Test Suite:${NC}"
    echo
    
    local menu_items=()
    local menu_keys=()
    local counter=1
    
    # Build menu from discovered tests
    for test_key in $(printf '%s\n' "${!TEST_FILES[@]}" | sort); do
        local description="${TEST_DESCRIPTIONS[$test_key]}"
        local cycles=$(get_test_cycles "$test_key")
        echo -e "  ${GREEN}$counter)${NC} $test_key - $description (${cycles} cycles)"
        menu_items+=("$test_key")
        menu_keys+=("$counter")
        ((counter++))
    done
    
    echo
    echo -e "${BLUE}Special Commands:${NC}"
    echo -e "  ${GREEN}a)${NC} Run all tests"
    echo -e "  ${GREEN}q)${NC} Quick validation (basic + cpu + memory)"
    echo -e "  ${GREEN}s)${NC} Stress tests (performance + simtop)"
    echo -e "  ${GREEN}c)${NC} Show/edit configuration"
    echo -e "  ${GREEN}l)${NC} List test files"
    echo -e "  ${GREEN}v)${NC} View VCD waveforms"
    echo -e "  ${GREEN}x)${NC} Exit"
    echo
    
    read -p "Choose option: " -r choice
    
    case "$choice" in
        [0-9]*)
            # Check if it's a valid number
            if [[ "$choice" =~ ^[0-9]+$ ]] && [[ $choice -ge 1 ]] && [[ $choice -le ${#menu_items[@]} ]]; then
                local index=$((choice - 1))
                local selected_test="${menu_items[$index]}"
                echo
                run_test "$selected_test"
                echo
                read -p "Press Enter to continue..." -r
                show_interactive_menu
            else
                echo "Invalid selection. Please choose a number between 1 and ${#menu_items[@]}"
                sleep 2
                show_interactive_menu
            fi
            ;;
        "a"|"A")
            echo
            local all_tests=($(printf '%s\n' "${!TEST_FILES[@]}" | sort))
            run_multiple_tests "${all_tests[@]}"
            echo
            read -p "Press Enter to continue..." -r
            show_interactive_menu
            ;;
        "q"|"Q")
            echo
            local quick_tests=()
            for test_key in "${!TEST_FILES[@]}"; do
                if [[ "$test_key" != "performance" && "$test_key" != "stress" ]]; then
                    quick_tests+=("$test_key")
                fi
            done
            run_multiple_tests "${quick_tests[@]}"
            echo
            read -p "Press Enter to continue..." -r
            show_interactive_menu
            ;;
        "s"|"S")
            echo
            run_multiple_tests "performance" "simtop"
            echo
            read -p "Press Enter to continue..." -r
            show_interactive_menu
            ;;
        "c"|"C")
            show_config_menu
            ;;
        "l"|"L")
            echo
            list_tests
            read -p "Press Enter to continue..." -r
            show_interactive_menu
            ;;
        "v"|"V")
            show_vcd_menu
            ;;
        "x"|"X")
            echo "Goodbye!"
            exit 0
            ;;
        *)
            echo "Invalid option: $choice"
            sleep 1
            show_interactive_menu
            ;;
    esac
}

# Show configuration menu
show_config_menu() {
    clear
    echo -e "${BLUE}=== Configuration Menu ===${NC}"
    echo
    
    echo -e "${CYAN}Current Settings:${NC}"
    if [[ -f "$CONFIG_FILE" ]]; then
        grep -E "^[A-Z_]+=.*" "$CONFIG_FILE" | while IFS='=' read -r key value; do
            echo "  $key = $value"
        done
    else
        echo "  Config file not found: $CONFIG_FILE"
    fi
    echo
    
    echo -e "${BLUE}Options:${NC}"
    echo -e "  ${GREEN}1)${NC} Edit config file (nano)"
    echo -e "  ${GREEN}2)${NC} Reset to defaults"
    echo -e "  ${GREEN}3)${NC} Reload configuration"
    echo -e "  ${GREEN}b)${NC} Back to main menu"
    echo
    
    read -p "Choose option: " -r choice
    
    case "$choice" in
        "1")
            if command -v nano &> /dev/null; then
                nano "$CONFIG_FILE"
                load_config
                echo "Configuration reloaded"
            else
                echo "nano not found. Please edit $CONFIG_FILE manually"
            fi
            sleep 2
            show_config_menu
            ;;
        "2")
            cp "$CONFIG_FILE" "${CONFIG_FILE}.backup"
            cat > "$CONFIG_FILE" << 'EOF'
# STONE-SIM Test Configuration
# Modify these values to control test behavior

# Default test cycles for different test types
BASIC_CYCLES=5000
CPU_CYCLES=3000
MEMORY_CYCLES=2000
PERFORMANCE_CYCLES=10000
STRESS_CYCLES=50000
INTERCONNECT_CYCLES=1000
SIMTOP_CYCLES=8000

# Global override (uncomment to use same cycles for all tests)
# GLOBAL_CYCLES=10000

# VCD generation settings
ENABLE_VCD=true
VCD_OUTPUT_DIR=test_results

# Timeout settings (0 = disabled)
TEST_TIMEOUT=0

# Verbose output
VERBOSE=false
EOF
            load_config
            echo "Configuration reset to defaults (backup saved as ${CONFIG_FILE}.backup)"
            sleep 2
            show_config_menu
            ;;
        "3")
            load_config
            echo "Configuration reloaded"
            sleep 1
            show_config_menu
            ;;
        "b"|"B")
            show_interactive_menu
            ;;
        *)
            echo "Invalid option: $choice"
            sleep 1
            show_config_menu
            ;;
    esac
}

# Show VCD viewer menu
show_vcd_menu() {
    clear
    echo -e "${BLUE}=== VCD Waveform Viewer ===${NC}"
    echo
    
    if ! command -v gtkwave &> /dev/null; then
        echo -e "${RED}GTKWave not found!${NC}"
        echo "Install with: sudo apt install gtkwave"
        echo
        read -p "Press Enter to continue..." -r
        show_interactive_menu
        return
    fi
    
    echo -e "${CYAN}Available VCD files:${NC}"
    local vcd_files=()
    local counter=1
    
    # Find VCD files in test_run_dir (sorted by modification time, oldest first)
    if [[ -d "$PROJECT_ROOT/test_run_dir" ]]; then
        # Create array of files with timestamps for sorting
        local temp_files=()
        while IFS= read -r -d '' vcd_file; do
            local mod_time=$(stat -c %Y "$vcd_file" 2>/dev/null || echo "0")
            temp_files+=("$mod_time:$vcd_file")
        done < <(find "$PROJECT_ROOT/test_run_dir" -name "*.vcd" -print0)
        
        # Sort by timestamp (oldest first) and display
        for file_entry in $(printf '%s\n' "${temp_files[@]}" | sort -n); do
            local vcd_file="${file_entry#*:}"
            local mod_time="${file_entry%:*}"
            local test_name=$(basename "$(dirname "$vcd_file")")
            local module_name=$(basename "$vcd_file" .vcd)
            local readable_time=$(date -d "@$mod_time" "+%H:%M:%S" 2>/dev/null || echo "??:??:??")
            echo -e "  ${GREEN}$counter)${NC} $module_name - $test_name ${CYAN}($readable_time)${NC}"
            vcd_files+=("$vcd_file")
            ((counter++))
        done
    fi
    
    # Check verilator_sim directory
    if [[ -f "$PROJECT_ROOT/verilator_sim/waves.vcd" ]]; then
        local mod_time=$(stat -c %Y "$PROJECT_ROOT/verilator_sim/waves.vcd" 2>/dev/null || echo "0")
        local readable_time=$(date -d "@$mod_time" "+%H:%M:%S" 2>/dev/null || echo "??:??:??")
        echo -e "  ${GREEN}$counter)${NC} Verilator Simulation - verilator_sim/waves.vcd ${CYAN}($readable_time)${NC}"
        vcd_files+=("$PROJECT_ROOT/verilator_sim/waves.vcd")
        ((counter++))
    fi
    
    if [[ ${#vcd_files[@]} -eq 0 ]]; then
        echo "  No VCD files found. Run some tests first!"
        echo
        read -p "Press Enter to continue..." -r
        show_interactive_menu
        return
    fi
    
    echo
    echo -e "${BLUE}Options:${NC}"
    echo -e "  ${GREEN}1-$((counter-1)))${NC} Open VCD file in GTKWave"
    echo -e "  ${GREEN}c)${NC} Clean old VCD files"
    echo -e "  ${GREEN}b)${NC} Back to main menu"
    echo
    
    read -p "Choose option: " -r choice
    
    case "$choice" in
        [0-9]*)
            # Check if it's a valid number
            if [[ "$choice" =~ ^[0-9]+$ ]] && [[ $choice -ge 1 ]] && [[ $choice -le ${#vcd_files[@]} ]]; then
                local index=$((choice - 1))
                local selected_vcd="${vcd_files[$index]}"
                local module_name=$(basename "$selected_vcd" .vcd)
                
                echo "Opening $selected_vcd in GTKWave..."
                
                # Use appropriate signal configuration if available
                local config_file=""
                case "$module_name" in
                    "SimpleMemory") config_file="$PROJECT_ROOT/scripts/memory_signals.gtkw" ;;
                    "SimpleCache") config_file="$PROJECT_ROOT/scripts/cache_signals.gtkw" ;;
                esac
                
                cd "$(dirname "$selected_vcd")"
                if [[ -n "$config_file" && -f "$config_file" ]]; then
                    gtkwave -a "$config_file" "$(basename "$selected_vcd")" &
                else
                    gtkwave "$(basename "$selected_vcd")" &
                fi
                
                echo "GTKWave launched in background"
                sleep 2
                show_vcd_menu
            else
                echo "Invalid selection. Please choose a number between 1 and ${#vcd_files[@]}"
                sleep 2
                show_vcd_menu
            fi
            ;;
        "c"|"C")
            echo "Cleaning old VCD files..."
            if [[ -d "$PROJECT_ROOT/test_run_dir" ]]; then
                find "$PROJECT_ROOT/test_run_dir" -name "*.vcd" -delete
                echo "Test VCD files cleaned"
            fi
            if [[ -f "$PROJECT_ROOT/verilator_sim/waves.vcd" ]]; then
                rm -f "$PROJECT_ROOT/verilator_sim/waves.vcd"
                echo "Verilator simulation VCD cleaned"
            fi
            sleep 1
            show_vcd_menu
            ;;
        "b"|"B")
            show_interactive_menu
            ;;
        *)
            echo "Invalid option: $choice"
            sleep 1
            show_vcd_menu
            ;;
    esac
}

# Show help
show_help() {
    echo "STONE-SIM Test Runner"
    echo
    echo "Usage: $0 [COMMAND|TEST_NAME]"
    echo "       TEST_CYCLES=N $0 [COMMAND|TEST_NAME]"
    echo
    echo "Commands:"
    echo "  list         List all available test suites"
    echo "  all          Run all test suites"
    echo "  quick        Run quick validation tests (basic, cpu, memory)"
    echo "  stress       Run performance and stress tests"
    echo "  report       Generate test report"
    echo "  help         Show this help message"
    echo
    echo "Configuration:"
    echo "  Edit scripts/test_config.txt to customize test cycles and settings"
    echo
    echo "Test Suites:"
    for test_key in "${!TEST_FILES[@]}"; do
        local description="${TEST_DESCRIPTIONS[$test_key]}"
        printf "  %-12s %s\n" "$test_key" "$description"
    done
    echo
    echo "Examples:"
    echo "  $0 basic              # Run basic SoC tests (uses BASIC_CYCLES from config)"
    echo "  $0 cpu memory         # Run CPU and memory tests"
    echo "  $0 stress             # Run stress tests (uses STRESS_CYCLES from config)"
    echo "  $0 all                # Run all tests"
    echo "  Edit scripts/test_config.txt to change cycle counts"
    echo
}

# Main script logic
main() {
    # If no arguments, show interactive menu
    if [[ $# -eq 0 ]]; then
        show_interactive_menu
        return 0
    fi
    
    case "$1" in
        "list")
            list_tests
            ;;
        "all")
            local all_tests=($(printf '%s\n' "${!TEST_FILES[@]}" | sort))
            run_multiple_tests "${all_tests[@]}"
            ;;
        "quick")
            # Auto-detect essential tests (exclude performance and stress tests)
            local quick_tests=()
            for test_key in "${!TEST_FILES[@]}"; do
                if [[ "$test_key" != "performance" && "$test_key" != "stress" ]]; then
                    quick_tests+=("$test_key")
                fi
            done
            run_multiple_tests "${quick_tests[@]}"
            ;;
        "stress")
            run_multiple_tests "performance" "simtop"
            ;;
        "report")
            generate_report
            ;;
        "help"|"-h"|"--help")
            show_help
            ;;
        "interactive"|"-i"|"--interactive")
            show_interactive_menu
            ;;
        *)
            # Check if it's a valid test name or multiple test names
            local test_names=("$@")
            run_multiple_tests "${test_names[@]}"
            ;;
    esac
}

# Run main function with all arguments
main "$@"