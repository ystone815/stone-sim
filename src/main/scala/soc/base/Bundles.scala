package soc.base

import chisel3._
import chisel3.util._

// AXI4 Interface Bundles
class AXI4AddressChannel(addrWidth: Int, idWidth: Int) extends Bundle {
  val id     = UInt(idWidth.W)
  val addr   = UInt(addrWidth.W)
  val len    = UInt(8.W)
  val size   = UInt(3.W)
  val burst  = UInt(2.W)
  val lock   = Bool()
  val cache  = UInt(4.W)
  val prot   = UInt(3.W)
  val qos    = UInt(4.W)
  val region = UInt(4.W)
}

class AXI4WriteDataChannel(dataWidth: Int) extends Bundle {
  val data = UInt(dataWidth.W)
  val strb = UInt((dataWidth/8).W)
  val last = Bool()
}

class AXI4ReadDataChannel(dataWidth: Int, idWidth: Int) extends Bundle {
  val id   = UInt(idWidth.W)
  val data = UInt(dataWidth.W)
  val resp = UInt(2.W)
  val last = Bool()
}

class AXI4WriteResponseChannel(idWidth: Int) extends Bundle {
  val id   = UInt(idWidth.W)
  val resp = UInt(2.W)
}

class AXI4Bundle(addrWidth: Int, dataWidth: Int, idWidth: Int) extends Bundle {
  // Write Address Channel
  val aw = Decoupled(new AXI4AddressChannel(addrWidth, idWidth))
  
  // Write Data Channel
  val w = Decoupled(new AXI4WriteDataChannel(dataWidth))
  
  // Write Response Channel
  val b = Flipped(Decoupled(new AXI4WriteResponseChannel(idWidth)))
  
  // Read Address Channel
  val ar = Decoupled(new AXI4AddressChannel(addrWidth, idWidth))
  
  // Read Data Channel
  val r = Flipped(Decoupled(new AXI4ReadDataChannel(dataWidth, idWidth)))
}

// Simple Memory Interface
class MemoryBundle(addrWidth: Int, dataWidth: Int) extends Bundle {
  val req = Decoupled(new Bundle {
    val addr = UInt(addrWidth.W)
    val data = UInt(dataWidth.W)
    val mask = UInt((dataWidth/8).W)
    val wen  = Bool()
  })
  val resp = Flipped(Decoupled(UInt(dataWidth.W)))
}

// CPU Instruction Interface
class InstructionBundle(addrWidth: Int) extends Bundle {
  val pc    = UInt(addrWidth.W)
  val valid = Bool()
  val ready = Bool()
  val inst  = UInt(32.W)
}

// Performance Counter Bundle
class PerfCounterBundle extends Bundle {
  val cycles = UInt(64.W)
  val instret = UInt(64.W)
  val cache_miss = UInt(32.W)
  val branch_miss = UInt(32.W)
}