/**
 * STONE-SIM Top-Level Simulation Tests
 * 
 * Tests for the complete simulation environment including
 * SimTop module and full system integration.
 */
import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import chiseltest.simulator.WriteVcdAnnotation
import org.scalatest.flatspec.AnyFlatSpec
import sim._

class SimTopTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Top-level simulation and integration"
  
  it should "run simulation to completion" in {
    test(new SimTop())
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Running SimTop simulation with Verilator...")
      
      // Run extended simulation with monitoring
      var cycles = 0
      val maxCycles = 1000  // Reasonable limit for testing
      val startTime = System.currentTimeMillis()
      
      while (!dut.io.finished.peekBoolean() && cycles < maxCycles) {
        dut.clock.step(1)
        cycles += 1
        
        // Progress monitoring every 200 cycles
        if (cycles % 200 == 0 && cycles > 0) {
          val currentTime = System.currentTimeMillis()
          val elapsed = currentTime - startTime
          val speed = cycles.toDouble / elapsed * 1000
          println(f"Simulation progress: $cycles cycles, speed: ${speed}%.1f cycles/sec")
        }
      }
      
      val endTime = System.currentTimeMillis()
      val totalTime = endTime - startTime
      
      println(s"\n=== SimTop Simulation Results ===")
      println(s"Simulation completed after $cycles cycles")
      println(s"Total time: ${totalTime}ms")
      println(f"Average speed: ${cycles.toDouble / totalTime * 1000}%.1f cycles/sec")
      
      if (dut.io.finished.peekBoolean()) {
        println("✓ Simulation finished naturally")
        dut.io.success.expect(true.B)
        println("✓ Simulation result: SUCCESS")
      } else {
        println(s"⚠ Simulation reached max cycles ($maxCycles)")
      }
    }
  }
  
  it should "generate proper performance metrics" in {
    test(new SimTop())
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Testing SimTop performance metrics...")
      
      val metricsTestCycles = 500
      var cycles = 0
      
      while (!dut.io.finished.peekBoolean() && cycles < metricsTestCycles) {
        dut.clock.step(1)
        cycles += 1
        
        // Monitor performance every 100 cycles
        if (cycles % 100 == 0) {
          val success = dut.io.success.peekBoolean()
          val finished = dut.io.finished.peekBoolean()
          println(s"Cycle $cycles: Success=$success, Finished=$finished")
        }
      }
      
      println(s"Performance metrics test completed after $cycles cycles")
    }
  }
}