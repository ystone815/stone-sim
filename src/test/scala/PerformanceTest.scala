/**
 * STONE-SIM Performance Benchmarking Tests
 * 
 * Tests for measuring and comparing simulation performance
 * between different backends and configurations.
 */
import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import org.scalatest.flatspec.AnyFlatSpec
import soc._
import soc.base._
import soc.cpu._

class PerformanceTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Performance benchmarking and stress tests"
  
  it should "demonstrate Verilator performance advantages" in {
    val config = SoCConfig(enablePerfCounters = true)
    val testCycles = sys.env.getOrElse("TEST_CYCLES", "1000").toInt  // Configurable via environment
    
    println("=== Verilator Performance Test ===")
    val verilatorStartTime = System.currentTimeMillis()
    
    test(new StoneSoC(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
        dut.io.uart_rx.poke(true.B)
        dut.io.gpio_in.poke(0.U)
        dut.clock.setTimeout(0)  // Disable timeout
        
        for (_ <- 0 until testCycles) {
          dut.clock.step(1)
        }
      }
    
    val verilatorEndTime = System.currentTimeMillis()
    val verilatorDuration = verilatorEndTime - verilatorStartTime
    
    // Results
    println(s"\n=== Performance Benchmark Results ===")
    println(s"Test cycles: $testCycles")
    val verilatorSpeed = testCycles.toDouble / verilatorDuration * 1000
    println(f"Verilator:   ${verilatorDuration}ms  (${verilatorSpeed}%.1f cycles/sec)")
    
    // Verify minimum performance threshold
    assert(verilatorSpeed > 1000, s"Verilator performance too low: ${verilatorSpeed} cycles/sec")
    println("✓ Performance benchmark passed")
  }
  
  it should "measure CPU-only performance" in {
    val config = SoCConfig()
    val cpuTestCycles = 2000
    
    println("=== CPU Performance Test ===")
    val startTime = System.currentTimeMillis()
    
    test(new SimpleCPU(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
        dut.clock.setTimeout(0)  // Disable timeout
        
        for (cycle <- 0 until cpuTestCycles) {
          dut.clock.step(1)
          
          if (cycle % 500 == 0 && cycle > 0) {
            val cycles = dut.io.perf.cycles.peekInt()
            val instret = dut.io.perf.instret.peekInt()
            println(s"CPU Cycle $cycle: Instructions=$instret, Total cycles=$cycles")
          }
        }
      }
    
    val endTime = System.currentTimeMillis()
    val duration = endTime - startTime
    val cpuSpeed = cpuTestCycles.toDouble / duration * 1000
    
    println(f"CPU Performance: $cpuTestCycles cycles in ${duration}ms (${cpuSpeed}%.1f cycles/sec)")
    assert(cpuSpeed > 500, s"CPU performance too low: ${cpuSpeed} cycles/sec")
    println("✓ CPU performance benchmark passed")
  }
  
  it should "stress test with extended simulation" in {
    val config = SoCConfig(enablePerfCounters = true)
    val stressCycles = 10000
    
    println("=== Stress Test ===")
    val startTime = System.currentTimeMillis()
    
    test(new StoneSoC(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
        dut.io.uart_rx.poke(true.B)
        dut.io.gpio_in.poke(0.U)
        dut.clock.setTimeout(0)  // Disable timeout
        
        for (cycle <- 0 until stressCycles) {
          dut.clock.step(1)
          
          if (cycle % 2000 == 0 && cycle > 0) {
            val currentTime = System.currentTimeMillis()
            val elapsed = currentTime - startTime
            val currentSpeed = cycle.toDouble / elapsed * 1000
            println(f"Stress test cycle $cycle: ${currentSpeed}%.1f cycles/sec")
          }
        }
      }
    
    val endTime = System.currentTimeMillis()
    val totalDuration = endTime - startTime
    val stressSpeed = stressCycles.toDouble / totalDuration * 1000
    
    println(f"\n=== Stress Test Results ===")
    println(f"Simulated $stressCycles cycles in ${totalDuration}ms")
    println(f"Sustained performance: ${stressSpeed}%.1f cycles/sec")
    
    assert(stressSpeed > 1000, s"Stress test performance too low: ${stressSpeed} cycles/sec")
    println("✓ Stress test passed")
  }
}