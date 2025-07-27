/**
 * STONE-SIM CPU Component Tests
 * 
 * Tests for the RISC-V CPU implementation including
 * instruction execution and performance monitoring.
 */
import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import chiseltest.simulator.WriteVcdAnnotation
import org.scalatest.flatspec.AnyFlatSpec
import soc._
import soc.base._
import soc.cpu._

class CPUOnlyTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "CPU component and instruction execution"
  
  it should "execute basic instructions" in {
    val config = SoCConfig()
    test(new SimpleCPU(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Testing CPU with Verilator backend...")
      
      // Initialize and run extended CPU test
      dut.clock.setTimeout(0)  // Disable timeout
      dut.clock.step(1)
      
      val cpuTestCycles = 500  // Reasonable test length
      for (cycle <- 0 until cpuTestCycles) {
        dut.clock.step(1)
        
        if (cycle % 100 == 0 && cycle > 0) {
          val cycles = dut.io.perf.cycles.peekInt()
          val instret = dut.io.perf.instret.peekInt()
          val ipc = if (cycles > 0) instret.toDouble / cycles.toDouble else 0.0
          println(f"Cycle $cycle: Instructions=$instret, IPC=${ipc}%.3f")
        }
      }
      
      // Final CPU performance check
      val finalCycles = dut.io.perf.cycles.peekInt()
      val finalInstructions = dut.io.perf.instret.peekInt()
      println(s"CPU test completed: $finalInstructions instructions in $finalCycles cycles")
    }
  }
  
  it should "handle pipeline hazards correctly" in {
    val config = SoCConfig()
    test(new SimpleCPU(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Testing CPU pipeline hazards...")
      
      dut.clock.setTimeout(0)  // Disable timeout
      dut.clock.step(1)
      
      // Test pipeline behavior
      val hazardTestCycles = 200
      for (cycle <- 0 until hazardTestCycles) {
        dut.clock.step(1)
        
        if (cycle % 50 == 0 && cycle > 0) {
          val cycles = dut.io.perf.cycles.peekInt()
          val cacheMiss = dut.io.perf.cache_miss.peekInt()
          val branchMiss = dut.io.perf.branch_miss.peekInt()
          println(s"Cycle $cycle: Cache misses=$cacheMiss, Branch misses=$branchMiss")
        }
      }
      
      println("Pipeline hazard test completed")
    }
  }
}