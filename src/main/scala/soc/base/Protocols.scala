package soc.base

import chisel3._
import chisel3.util._

// AXI4 Protocol Helper Functions
object AXI4Helpers {
  def createReadTransaction(addr: UInt, size: UInt, len: UInt, id: UInt): AXI4AddressChannel = {
    val ar = Wire(new AXI4AddressChannel(32, 4))
    ar.id := id
    ar.addr := addr
    ar.len := len
    ar.size := size
    ar.burst := AXIConsts.BURST_INCR
    ar.lock := false.B
    ar.cache := 0.U
    ar.prot := 0.U
    ar.qos := 0.U
    ar.region := 0.U
    ar
  }
  
  def createWriteTransaction(addr: UInt, size: UInt, len: UInt, id: UInt): AXI4AddressChannel = {
    val aw = Wire(new AXI4AddressChannel(32, 4))
    aw.id := id
    aw.addr := addr
    aw.len := len
    aw.size := size
    aw.burst := AXIConsts.BURST_INCR
    aw.lock := false.B
    aw.cache := 0.U
    aw.prot := 0.U
    aw.qos := 0.U
    aw.region := 0.U
    aw
  }
  
  def getStrobe(addr: UInt, size: UInt, dataWidth: Int): UInt = {
    val byteWidth = dataWidth / 8
    val offset = addr(log2Ceil(byteWidth) - 1, 0)
    val numBytes = 1.U << size
    
    MuxLookup(size, ((1 << byteWidth) - 1).U)(Seq(
      AXIConsts.SIZE_1B -> (1.U << offset),
      AXIConsts.SIZE_2B -> (3.U << offset),
      AXIConsts.SIZE_4B -> (15.U << offset)
    ))
  }
}

// Memory Protocol Converter: AXI4 to Simple Memory Interface
class AXI4ToMemory(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val axi = Flipped(new AXI4Bundle(config.axiAddrWidth, config.axiDataWidth, config.axiIdWidth))
    val mem = new MemoryBundle(config.addrWidth, config.dataWidth)
  })
  
  // State machines for read and write
  val sReadIdle :: sReadReq :: sReadResp :: Nil = Enum(3)
  val sWriteIdle :: sWriteAddr :: sWriteData :: sWriteResp :: Nil = Enum(4)
  
  val readState = RegInit(sReadIdle)
  val writeState = RegInit(sWriteIdle)
  
  // Read transaction storage
  val readId = Reg(UInt(config.axiIdWidth.W))
  val readAddr = Reg(UInt(config.axiAddrWidth.W))
  val readLen = Reg(UInt(8.W))
  val readSize = Reg(UInt(3.W))
  val readCount = Reg(UInt(8.W))
  
  // Write transaction storage
  val writeId = Reg(UInt(config.axiIdWidth.W))
  val writeAddr = Reg(UInt(config.axiAddrWidth.W))
  val writeLen = Reg(UInt(8.W))
  val writeSize = Reg(UInt(3.W))
  
  // Default connections
  io.axi.ar.ready := false.B
  io.axi.r.valid := false.B
  io.axi.r.bits := DontCare
  io.axi.aw.ready := false.B
  io.axi.w.ready := false.B
  io.axi.b.valid := false.B
  io.axi.b.bits := DontCare
  io.mem.req.valid := false.B
  io.mem.req.bits := DontCare
  io.mem.resp.ready := false.B
  
  // Read FSM
  switch(readState) {
    is(sReadIdle) {
      io.axi.ar.ready := true.B
      when(io.axi.ar.fire) {
        readId := io.axi.ar.bits.id
        readAddr := io.axi.ar.bits.addr
        readLen := io.axi.ar.bits.len
        readSize := io.axi.ar.bits.size
        readCount := 0.U
        readState := sReadReq
      }
    }
    
    is(sReadReq) {
      io.mem.req.valid := true.B
      io.mem.req.bits.addr := readAddr
      io.mem.req.bits.data := 0.U
      io.mem.req.bits.mask := 0.U
      io.mem.req.bits.wen := false.B
      
      when(io.mem.req.fire) {
        readState := sReadResp
      }
    }
    
    is(sReadResp) {
      io.mem.resp.ready := true.B
      io.axi.r.valid := io.mem.resp.valid
      io.axi.r.bits.id := readId
      io.axi.r.bits.data := io.mem.resp.bits
      io.axi.r.bits.resp := AXIConsts.RESP_OKAY
      io.axi.r.bits.last := readCount === readLen
      
      when(io.axi.r.fire) {
        when(readCount === readLen) {
          readState := sReadIdle
        }.otherwise {
          readCount := readCount + 1.U
          readAddr := readAddr + (1.U << readSize)
          readState := sReadReq
        }
      }
    }
  }
  
  // Write FSM
  switch(writeState) {
    is(sWriteIdle) {
      io.axi.aw.ready := true.B
      when(io.axi.aw.fire) {
        writeId := io.axi.aw.bits.id
        writeAddr := io.axi.aw.bits.addr
        writeLen := io.axi.aw.bits.len
        writeSize := io.axi.aw.bits.size
        writeState := sWriteData
      }
    }
    
    is(sWriteData) {
      io.axi.w.ready := io.mem.req.ready
      io.mem.req.valid := io.axi.w.valid
      io.mem.req.bits.addr := writeAddr
      io.mem.req.bits.data := io.axi.w.bits.data
      io.mem.req.bits.mask := io.axi.w.bits.strb
      io.mem.req.bits.wen := true.B
      
      when(io.axi.w.fire) {
        when(io.axi.w.bits.last) {
          writeState := sWriteResp
        }.otherwise {
          writeAddr := writeAddr + (1.U << writeSize)
        }
      }
    }
    
    is(sWriteResp) {
      io.axi.b.valid := true.B
      io.axi.b.bits.id := writeId
      io.axi.b.bits.resp := AXIConsts.RESP_OKAY
      
      when(io.axi.b.fire) {
        writeState := sWriteIdle
      }
    }
  }
}

// Simple TileLink-like Protocol
class TileLinkBundle(addrWidth: Int, dataWidth: Int, sourceWidth: Int) extends Bundle {
  val a = Decoupled(new Bundle {
    val opcode = UInt(3.W)
    val param = UInt(3.W)
    val size = UInt(3.W)
    val source = UInt(sourceWidth.W)
    val address = UInt(addrWidth.W)
    val mask = UInt((dataWidth/8).W)
    val data = UInt(dataWidth.W)
  })
  
  val d = Flipped(Decoupled(new Bundle {
    val opcode = UInt(3.W)
    val param = UInt(2.W)
    val size = UInt(3.W)
    val source = UInt(sourceWidth.W)
    val sink = UInt(1.W)
    val denied = Bool()
    val data = UInt(dataWidth.W)
    val corrupt = Bool()
  }))
}

// TileLink opcodes
object TileLinkOpcodes {
  val PutFullData = 0.U(3.W)
  val PutPartialData = 1.U(3.W)
  val ArithmeticData = 2.U(3.W)
  val LogicalData = 3.U(3.W)
  val Get = 4.U(3.W)
  val Intent = 5.U(3.W)
  val Acquire = 6.U(3.W)
  
  val AccessAck = 0.U(3.W)
  val AccessAckData = 1.U(3.W)
  val HintAck = 2.U(3.W)
}