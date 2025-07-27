package soc.memory

import chisel3._
import chisel3.util._
import soc.base._

// Simple Memory Controller
class SimpleMemory(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val req = Flipped(DecoupledIO(new Bundle {
      val addr = UInt(config.addrWidth.W)
      val data = UInt(config.dataWidth.W)
      val mask = UInt((config.dataWidth/8).W)
      val wen  = Bool()
    }))
    val resp = DecoupledIO(UInt(config.dataWidth.W))
  })
  
  // Memory array
  val mem = SyncReadMem(config.memorySize / (config.dataWidth / 8), UInt(config.dataWidth.W))
  
  // Address calculation
  val word_addr = io.req.bits.addr >> log2Ceil(config.dataWidth / 8)
  
  // Response register
  val resp_valid = RegInit(false.B)
  val resp_data = Reg(UInt(config.dataWidth.W))
  
  // Default connections
  io.req.ready := !resp_valid
  io.resp.valid := resp_valid
  io.resp.bits := resp_data
  
  // Memory access
  when(io.req.fire) {
    when(io.req.bits.wen) {
      // Write operation with byte masking
      val old_data = mem.read(word_addr)
      val new_data = Wire(UInt(config.dataWidth.W))
      val byte_writes = VecInit((0 until config.dataWidth/8).map { i =>
        Mux(io.req.bits.mask(i), 
            io.req.bits.data(8*(i+1)-1, 8*i),
            old_data(8*(i+1)-1, 8*i))
      })
      new_data := Cat(byte_writes.reverse)
      mem.write(word_addr, new_data)
      resp_valid := false.B
    }.otherwise {
      // Read operation
      resp_data := mem.read(word_addr)
      resp_valid := true.B
    }
  }
  
  // Clear response when consumed
  when(io.resp.fire) {
    resp_valid := false.B
  }
}

// Simple Cache (Direct-mapped)
class SimpleCache(config: SoCConfig, cacheSize: Int) extends Module {
  val io = IO(new Bundle {
    val cpu = Flipped(new MemoryBundle(config.addrWidth, config.dataWidth))
    val mem = new MemoryBundle(config.addrWidth, config.dataWidth)
    val perf = Output(new Bundle {
      val hits = UInt(32.W)
      val misses = UInt(32.W)
    })
  })
  
  val cacheLines = cacheSize / config.cacheLineSize
  val offsetBits = log2Ceil(config.cacheLineSize)
  val indexBits = log2Ceil(cacheLines)
  val tagBits = config.addrWidth - indexBits - offsetBits
  
  // Cache arrays
  val dataArray = SyncReadMem(cacheLines, UInt((config.cacheLineSize * 8).W))
  val tagArray = SyncReadMem(cacheLines, UInt(tagBits.W))
  val validArray = RegInit(VecInit(Seq.fill(cacheLines)(false.B)))
  
  // Address breakdown
  val addr = io.cpu.req.bits.addr
  val tag = addr(config.addrWidth - 1, indexBits + offsetBits)
  val index = addr(indexBits + offsetBits - 1, offsetBits)
  val offset = addr(offsetBits - 1, 0)
  
  // Cache state machine
  val sIdle :: sReadMem :: sWriteMem :: Nil = Enum(3)
  val state = RegInit(sIdle)
  
  // Performance counters
  val hit_counter = RegInit(0.U(32.W))
  val miss_counter = RegInit(0.U(32.W))
  
  // Default connections
  io.cpu.req.ready := false.B
  io.cpu.resp.valid := false.B
  io.cpu.resp.bits := 0.U
  io.mem.req.valid := false.B
  io.mem.req.bits := DontCare
  io.mem.resp.ready := false.B
  
  switch(state) {
    is(sIdle) {
      io.cpu.req.ready := true.B
      
      when(io.cpu.req.fire) {
        val hit = validArray(index) && (tagArray.read(index) === tag)
        
        when(hit) {
          // Cache hit
          val cache_line = dataArray.read(index)
          val word_offset = offset >> log2Ceil(config.dataWidth / 8)
          val word_data = cache_line >> (word_offset * config.dataWidth.U)
          
          when(io.cpu.req.bits.wen) {
            // Write hit - write through
            io.mem.req.valid := true.B
            io.mem.req.bits := io.cpu.req.bits
            state := sWriteMem
          }.otherwise {
            // Read hit
            io.cpu.resp.valid := true.B
            io.cpu.resp.bits := word_data(config.dataWidth - 1, 0)
            hit_counter := hit_counter + 1.U
          }
        }.otherwise {
          // Cache miss
          miss_counter := miss_counter + 1.U
          io.mem.req.valid := true.B
          io.mem.req.bits.addr := Cat(tag, index, 0.U(offsetBits.W))
          io.mem.req.bits.data := 0.U
          io.mem.req.bits.mask := 0.U
          io.mem.req.bits.wen := false.B
          state := sReadMem
        }
      }
    }
    
    is(sReadMem) {
      io.mem.resp.ready := true.B
      
      when(io.mem.resp.fire) {
        // Update cache
        dataArray.write(index, io.mem.resp.bits)
        tagArray.write(index, tag)
        validArray(index) := true.B
        
        // Return data to CPU
        io.cpu.resp.valid := true.B
        io.cpu.resp.bits := io.mem.resp.bits(config.dataWidth - 1, 0)
        state := sIdle
      }
    }
    
    is(sWriteMem) {
      io.mem.resp.ready := true.B
      
      when(io.mem.resp.valid || !io.mem.req.valid) {
        state := sIdle
      }
    }
  }
  
  io.perf.hits := hit_counter
  io.perf.misses := miss_counter
}