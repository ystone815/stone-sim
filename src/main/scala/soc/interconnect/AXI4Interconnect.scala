package soc.interconnect

import chisel3._
import chisel3.util._
import soc.base._

// AXI4 Crossbar Interconnect
class AXI4Crossbar(config: SoCConfig, nMasters: Int, nSlaves: Int) extends Module {
  val io = IO(new Bundle {
    val masters = Vec(nMasters, Flipped(new AXI4Bundle(config.axiAddrWidth, config.axiDataWidth, config.axiIdWidth)))
    val slaves = Vec(nSlaves, new AXI4Bundle(config.axiAddrWidth, config.axiDataWidth, config.axiIdWidth))
    val addr_map = Input(Vec(nSlaves, new Bundle {
      val base = UInt(config.axiAddrWidth.W)
      val mask = UInt(config.axiAddrWidth.W)
    }))
  })
  
  // Address decoder
  def decodeAddress(addr: UInt): UInt = {
    val matches = VecInit((0 until nSlaves).map { i =>
      (addr & io.addr_map(i).mask) === (io.addr_map(i).base & io.addr_map(i).mask)
    })
    PriorityEncoder(matches)
  }
  
  // Write address channel crossbar
  val aw_arb = (0 until nSlaves).map { s =>
    Module(new Arbiter(new AXI4AddressChannel(config.axiAddrWidth, config.axiIdWidth), nMasters))
  }
  
  // Write data channel crossbar  
  val w_arb = (0 until nSlaves).map { s =>
    Module(new Arbiter(new AXI4WriteDataChannel(config.axiDataWidth), nMasters))
  }
  
  // Read address channel crossbar
  val ar_arb = (0 until nSlaves).map { s =>
    Module(new Arbiter(new AXI4AddressChannel(config.axiAddrWidth, config.axiIdWidth), nMasters))
  }
  
  // Connect write address channels
  for (s <- 0 until nSlaves) {
    for (m <- 0 until nMasters) {
      val slave_sel = decodeAddress(io.masters(m).aw.bits.addr) === s.U
      aw_arb(s).io.in(m).valid := io.masters(m).aw.valid && slave_sel
      aw_arb(s).io.in(m).bits := io.masters(m).aw.bits
    }
    io.slaves(s).aw <> aw_arb(s).io.out
  }
  
  // Connect master ready signals for write address
  for (m <- 0 until nMasters) {
    val slave_sel = decodeAddress(io.masters(m).aw.bits.addr)
    io.masters(m).aw.ready := false.B
    for (s <- 0 until nSlaves) {
      when(slave_sel === s.U) {
        io.masters(m).aw.ready := aw_arb(s).io.in(m).ready
      }
    }
  }
  
  // Connect write data channels (similar logic)
  for (s <- 0 until nSlaves) {
    for (m <- 0 until nMasters) {
      // Simplified: assume write data follows write address
      w_arb(s).io.in(m) <> io.masters(m).w
    }
    io.slaves(s).w <> w_arb(s).io.out
  }
  
  // Connect read address channels
  for (s <- 0 until nSlaves) {
    for (m <- 0 until nMasters) {
      val slave_sel = decodeAddress(io.masters(m).ar.bits.addr) === s.U
      ar_arb(s).io.in(m).valid := io.masters(m).ar.valid && slave_sel
      ar_arb(s).io.in(m).bits := io.masters(m).ar.bits
    }
    io.slaves(s).ar <> ar_arb(s).io.out
  }
  
  // Connect master ready signals for read address
  for (m <- 0 until nMasters) {
    val slave_sel = decodeAddress(io.masters(m).ar.bits.addr)
    io.masters(m).ar.ready := false.B
    for (s <- 0 until nSlaves) {
      when(slave_sel === s.U) {
        io.masters(m).ar.ready := ar_arb(s).io.in(m).ready
      }
    }
  }
  
  // Initialize response channels
  for (m <- 0 until nMasters) {
    io.masters(m).b.valid := false.B
    io.masters(m).b.bits := DontCare
    io.masters(m).r.valid := false.B
    io.masters(m).r.bits := DontCare
  }
  
  for (s <- 0 until nSlaves) {
    io.slaves(s).b.ready := false.B
    io.slaves(s).r.ready := false.B
  }
  
  // Simple response routing (one-to-one for now)
  for (m <- 0 until nMasters) {
    for (s <- 0 until nSlaves) {
      when(m.U === s.U) {  // Simplified: master i connects to slave i
        // Write response
        io.masters(m).b.valid := io.slaves(s).b.valid
        io.masters(m).b.bits := io.slaves(s).b.bits
        io.slaves(s).b.ready := io.masters(m).b.ready
        
        // Read response
        io.masters(m).r.valid := io.slaves(s).r.valid
        io.masters(m).r.bits := io.slaves(s).r.bits
        io.slaves(s).r.ready := io.masters(m).r.ready
      }
    }
  }
}

// Simple AXI4 to Memory Bridge
class AXI4MemoryBridge(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val axi = Flipped(new AXI4Bundle(config.axiAddrWidth, config.axiDataWidth, config.axiIdWidth))
    val mem = new MemoryBundle(config.addrWidth, config.dataWidth)
  })
  
  // Use the AXI4ToMemory converter from Protocols.scala
  val converter = Module(new AXI4ToMemory(config))
  converter.io.axi <> io.axi
  converter.io.mem <> io.mem
}

// NoC (Network-on-Chip) Router for larger systems
class NoCRouter(config: SoCConfig, nPorts: Int) extends Module {
  val io = IO(new Bundle {
    val ports = Vec(nPorts, new Bundle {
      val in = Flipped(DecoupledIO(new NoCPacket(config)))
      val out = DecoupledIO(new NoCPacket(config))
    })
    val routing_table = Input(Vec(1 << config.axiIdWidth, UInt(log2Ceil(nPorts).W)))
  })
  
  // Input buffers
  val input_buffers = (0 until nPorts).map { i =>
    Module(new Queue(new NoCPacket(config), 4))
  }
  
  // Connect input buffers
  for (i <- 0 until nPorts) {
    input_buffers(i).io.enq <> io.ports(i).in
  }
  
  // Round-robin arbiter for each output port
  val output_arbiters = (0 until nPorts).map { i =>
    Module(new RRArbiter(new NoCPacket(config), nPorts))
  }
  
  // Connect arbiters
  for (i <- 0 until nPorts) {
    for (j <- 0 until nPorts) {
      val route_port = io.routing_table(input_buffers(j).io.deq.bits.dest)
      output_arbiters(i).io.in(j).valid := input_buffers(j).io.deq.valid && (route_port === i.U)
      output_arbiters(i).io.in(j).bits := input_buffers(j).io.deq.bits
    }
    
    io.ports(i).out <> output_arbiters(i).io.out
  }
  
  // Connect ready signals back to input buffers
  for (j <- 0 until nPorts) {
    val route_port = io.routing_table(input_buffers(j).io.deq.bits.dest)
    input_buffers(j).io.deq.ready := false.B
    for (i <- 0 until nPorts) {
      when(route_port === i.U) {
        input_buffers(j).io.deq.ready := output_arbiters(i).io.in(j).ready
      }
    }
  }
}

// NoC Packet Definition
class NoCPacket(config: SoCConfig) extends Bundle {
  val dest = UInt(config.axiIdWidth.W)
  val src = UInt(config.axiIdWidth.W)
  val data = UInt(config.axiDataWidth.W)
  val packet_type = UInt(2.W)  // 0: data, 1: request, 2: response, 3: control
}