ThisBuild / scalaVersion := "2.13.12"
ThisBuild / version := "0.1.0-SNAPSHOT"
ThisBuild / organization := "com.stone"

val chiselVersion = "6.5.0"

lazy val root = (project in file("."))
  .settings(
    name := "stone-sim",
    description := "STONE-SIM: SynThetic On-chip Network SIMulator - A Chisel-based SoC simulator for performance measurement and RTL generation",
    libraryDependencies ++= Seq(
      "org.chipsalliance" %% "chisel" % chiselVersion,
      "edu.berkeley.cs" %% "chiseltest" % "6.0.0" % Test,
      "org.scalatest" %% "scalatest" % "3.2.19" % Test,
    ),
    // Verilator simulation support
    Test / testOptions += Tests.Argument(TestFrameworks.ScalaTest, "-oSD"),
    scalacOptions ++= Seq(
      "-deprecation",
      "-feature",
      "-unchecked",
      "-language:reflectiveCalls",
      "-Xcheckinit",
    ),
    addCompilerPlugin("org.chipsalliance" % "chisel-plugin" % chiselVersion cross CrossVersion.full),
  )