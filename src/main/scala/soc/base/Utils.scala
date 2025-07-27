package soc.base

import chisel3._
import chisel3.util._

object Utils {
  // Priority arbitrator
  def priorityArbiter[T <: Data](in: Seq[DecoupledIO[T]]): (DecoupledIO[T], UInt) = {
    val arb = Module(new Arbiter(chiselTypeOf(in.head.bits), in.length))
    arb.io.in <> in
    (arb.io.out, arb.io.chosen)
  }
  
  // Round-robin arbitrator
  def roundRobinArbiter[T <: Data](in: Seq[DecoupledIO[T]]): (DecoupledIO[T], UInt) = {
    val arb = Module(new RRArbiter(chiselTypeOf(in.head.bits), in.length))
    arb.io.in <> in
    (arb.io.out, arb.io.chosen)
  }
  
  // One-hot to binary encoder
  def oneHotToBin(oneHot: UInt): UInt = {
    OHToUInt(oneHot)
  }
  
  // Binary to one-hot decoder
  def binToOneHot(bin: UInt, width: Int): UInt = {
    UIntToOH(bin, width)
  }
  
  // Leading zero counter
  def leadingZeros(x: UInt): UInt = {
    PriorityEncoder(Reverse(x))
  }
  
  // Population count (count number of 1s)
  def popCount(x: UInt): UInt = {
    PopCount(x)
  }
  
  // Create a register with enable
  def regEnable[T <: Data](next: T, enable: Bool): T = {
    val reg = RegNext(next, 0.U.asTypeOf(next))
    when(enable) {
      reg := next
    }
    reg
  }
  
  // Create a register with reset value
  def regWithReset[T <: Data](next: T, resetValue: T): T = {
    RegNext(next, resetValue)
  }
  
  // FIFO queue generator
  def queue[T <: Data](enq: DecoupledIO[T], depth: Int): DecoupledIO[T] = {
    val q = Module(new Queue(chiselTypeOf(enq.bits), depth))
    q.io.enq <> enq
    q.io.deq
  }
  
  // Crossbar switch
  class CrossbarSwitch[T <: Data](gen: T, nInputs: Int, nOutputs: Int) extends Module {
    val io = IO(new Bundle {
      val in = Vec(nInputs, Flipped(DecoupledIO(gen)))
      val out = Vec(nOutputs, DecoupledIO(gen))
      val select = Input(Vec(nInputs, UInt(log2Ceil(nOutputs).W)))
    })
    
    // Default connections
    for (i <- 0 until nInputs) {
      io.in(i).ready := false.B
    }
    for (o <- 0 until nOutputs) {
      io.out(o).valid := false.B
      io.out(o).bits := DontCare
    }
    
    // Connect inputs to selected outputs
    for (i <- 0 until nInputs) {
      val sel = io.select(i)
      when(sel < nOutputs.U) {
        io.out(sel).valid := io.in(i).valid
        io.out(sel).bits := io.in(i).bits
        io.in(i).ready := io.out(sel).ready
      }
    }
  }
}

// Performance counter utilities
class PerfCounter extends Module {
  val io = IO(new Bundle {
    val enable = Input(Bool())
    val clear = Input(Bool())
    val count = Output(UInt(64.W))
  })
  
  val counter = RegInit(0.U(64.W))
  
  when(io.clear) {
    counter := 0.U
  }.elsewhen(io.enable) {
    counter := counter + 1.U
  }
  
  io.count := counter
}

// Synchronous FIFO
class SyncFIFO[T <: Data](gen: T, depth: Int) extends Module {
  val io = IO(new Bundle {
    val enq = Flipped(DecoupledIO(gen))
    val deq = DecoupledIO(gen)
    val count = Output(UInt(log2Ceil(depth + 1).W))
    val empty = Output(Bool())
    val full = Output(Bool())
  })
  
  val mem = SyncReadMem(depth, gen)
  val writePtr = RegInit(0.U(log2Ceil(depth).W))
  val readPtr = RegInit(0.U(log2Ceil(depth).W))
  val isEmpty = RegInit(true.B)
  val isFull = RegInit(false.B)
  
  val nextWritePtr = Mux(writePtr === (depth - 1).U, 0.U, writePtr + 1.U)
  val nextReadPtr = Mux(readPtr === (depth - 1).U, 0.U, readPtr + 1.U)
  
  // Write logic
  when(io.enq.fire) {
    mem.write(writePtr, io.enq.bits)
    writePtr := nextWritePtr
    isEmpty := false.B
    when(nextWritePtr === readPtr) {
      isFull := true.B
    }
  }
  
  // Read logic
  when(io.deq.fire) {
    readPtr := nextReadPtr
    isFull := false.B
    when(nextReadPtr === writePtr) {
      isEmpty := true.B
    }
  }
  
  io.enq.ready := !isFull
  io.deq.valid := !isEmpty
  io.deq.bits := mem.read(readPtr)
  io.empty := isEmpty
  io.full := isFull
  
  // Count calculation
  val ptrDiff = writePtr - readPtr
  io.count := Mux(isEmpty, 0.U,
    Mux(isFull, depth.U,
      Mux(writePtr >= readPtr, ptrDiff, depth.U + ptrDiff)))
}