package sim

import chisel3._
import soc.memory.SimpleMemory
import soc.base.SoCConfig

// Simple RTL Generation for testing
object SimpleRTLGeneration extends App {
  println("Generating RTL for Simple Memory...")
  
  val config = SoCConfig()
  emitVerilog(new SimpleMemory(config), Array("--target-dir", "rtl"))
  
  println("Simple Memory RTL generation completed!")
  println("Generated files in rtl/ directory")
}