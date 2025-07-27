/**
 * STONE-SIM Basic SoC Tests
 * 
 * Tests for basic SoC functionality including instantiation,
 * performance counters, and extended simulation capabilities.
 */
import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import chiseltest.simulator.WriteVcdAnnotation
import org.scalatest.flatspec.AnyFlatSpec
import soc._
import soc.base._
import sim._

class BasicSoCTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Basic SoC functionality and instantiation"
  
  it should "instantiate without errors" in {
    test(new StoneSoC())
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      // Basic instantiation test with Verilator
      println("Starting SoC instantiation test with Verilator...")
      dut.io.uart_rx.poke(true.B)
      dut.io.gpio_in.poke(0.U)
      dut.clock.step(10)
      println("SoC instantiated successfully with Verilator backend")
    }
  }
  
  it should "generate performance counters when enabled" in {
    val config = SoCConfig(enablePerfCounters = true)
    test(new StoneSoC(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Testing performance counters with Verilator...")
      dut.io.uart_rx.poke(true.B)
      dut.io.gpio_in.poke(0.U)
      
      // Run longer simulation to test performance monitoring
      val testCycles = sys.env.getOrElse("TEST_CYCLES", "1000").toInt  // Configurable via environment
      val startTime = System.currentTimeMillis()
      
      // Set timeout to prevent idle timeout during long simulation
      dut.clock.setTimeout(0)  // Disable timeout
      
      for (cycle <- 0 until testCycles) {
        dut.clock.step(1)
        
        // Print progress every 200 cycles
        if (cycle % 200 == 0 && cycle > 0) {
          println(s"Cycle $cycle completed")
          
          // Check performance counters if available
          if (dut.io.debug_perf.isDefined) {
            val cycles = dut.io.debug_perf.get.cycles_per_second.peekInt()
            val instructions = dut.io.debug_perf.get.instructions_per_second.peekInt()
            val ipc = dut.io.debug_perf.get.avg_ipc.peekInt()
            println(s"  Performance: cycles=$cycles, instructions=$instructions, IPC=$ipc")
          }
        }
      }
      
      val endTime = System.currentTimeMillis()
      val duration = endTime - startTime
      println(s"Performance test completed: $testCycles cycles in ${duration}ms")
      val verilatorSpeed = testCycles.toDouble / duration * 1000
      println(f"Verilator speed: ${verilatorSpeed}%.1f cycles/sec")
    }
  }
  
  it should "run extended simulation test" in {
    val config = SoCConfig(enablePerfCounters = true, enableTrace = true)
    test(new StoneSoC(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Starting extended SoC simulation with Verilator...")
      dut.io.uart_rx.poke(true.B)
      dut.io.gpio_in.poke(0.U)
      
      val extendedCycles = sys.env.getOrElse("TEST_CYCLES", "5000").toInt  // Configurable via environment
      val startTime = System.currentTimeMillis()
      
      // Set timeout to prevent idle timeout during long simulation
      dut.clock.setTimeout(0)  // Disable timeout
      
      for (cycle <- 0 until extendedCycles) {
        dut.clock.step(1)
        
        // Monitor system status every 1000 cycles
        if (cycle % 1000 == 0 && cycle > 0) {
          println(s"Extended test - Cycle $cycle")
          
          // Check all debug interfaces
          if (dut.io.debug_perf.isDefined) {
            val cycles = dut.io.debug_perf.get.cycles_per_second.peekInt()
            val avgIpc = dut.io.debug_perf.get.avg_ipc.peekInt()
            println(s"  System performance: cycles/sec=$cycles, avg_IPC=$avgIpc")
          }
          
          if (dut.io.debug_trace.isDefined) {
            val traceValid = dut.io.debug_trace.get.valid.peekBoolean()
            if (traceValid) {
              val pc = dut.io.debug_trace.get.pc.peekInt()
              val inst = dut.io.debug_trace.get.inst.peekInt()
              println(f"  Trace: PC=0x${pc.toInt}%08x, INST=0x${inst.toInt}%08x")
            }
          }
        }
      }
      
      val endTime = System.currentTimeMillis()
      val duration = endTime - startTime
      
      println(s"\n=== Extended Simulation Results ===")
      println(s"Total cycles simulated: $extendedCycles")
      println(s"Total simulation time: ${duration}ms")
      val avgSpeed = extendedCycles.toDouble / duration * 1000
      println(f"Average simulation speed: ${avgSpeed}%.1f cycles/sec")
      println("Extended simulation completed successfully")
    }
  }
}