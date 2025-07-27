/**
 * STONE-SIM Interconnect System Tests
 * 
 * Tests for AXI4 crossbar and Network-on-Chip router
 * functionality with multi-master and multi-slave scenarios.
 */
import chisel3._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import chiseltest.simulator.WriteVcdAnnotation
import org.scalatest.flatspec.AnyFlatSpec
import soc._
import soc.base._
import soc.interconnect._

class InterconnectTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Interconnect and network functionality"
  
  it should "handle AXI4 crossbar operations" in {
    val config = SoCConfig()
    
    // Test AXI4 to Memory bridge
    test(new AXI4MemoryBridge(config))
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Testing AXI4 to Memory bridge...")
      
      // Initialize
      dut.io.mem.resp.ready.poke(true.B)
      dut.clock.step(5)
      
      // Test basic AXI4 transactions
      dut.io.axi.aw.valid.poke(true.B)
      dut.io.axi.aw.bits.addr.poke(0x1000.U)
      dut.io.axi.aw.bits.id.poke(1.U)
      dut.io.axi.aw.bits.len.poke(0.U)
      dut.io.axi.aw.bits.size.poke(2.U)  // 4 bytes
      
      dut.clock.step(1)
      dut.io.axi.aw.valid.poke(false.B)
      dut.clock.step(5)
      
      println("AXI4 to Memory bridge test completed")
    }
  }
  
  it should "route packets in NoC router" in {
    val config = SoCConfig()
    val nPorts = 4
    
    test(new NoCRouter(config, nPorts))
      .withAnnotations(Seq(VerilatorBackendAnnotation, WriteVcdAnnotation)) { dut =>
      println("Testing NoC router with 4 ports...")
      
      // Initialize routing table
      for (i <- 0 until (1 << config.axiIdWidth)) {
        dut.io.routing_table(i).poke((i % nPorts).U)
      }
      
      dut.clock.step(5)
      
      // Test packet routing
      for (port <- 0 until nPorts) {
        dut.io.ports(port).in.valid.poke(true.B)
        dut.io.ports(port).in.bits.dest.poke(((port + 1) % nPorts).U)
        dut.io.ports(port).in.bits.src.poke(port.U)
        dut.io.ports(port).in.bits.data.poke((0x1000 + port * 0x100).U)
        dut.io.ports(port).in.bits.packet_type.poke(1.U)  // Request
        
        dut.io.ports(port).out.ready.poke(true.B)
      }
      
      dut.clock.step(1)
      
      // Clear inputs
      for (port <- 0 until nPorts) {
        dut.io.ports(port).in.valid.poke(false.B)
      }
      
      dut.clock.step(10)  // Allow routing to complete
      
      println("NoC router test completed")
    }
  }
}