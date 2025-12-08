val chiselVersion = "3.5.6"

ThisBuild / scalaVersion := "2.13.10"

lazy val root = (project in file("."))
  .settings(
    name := "gb-fpga-core",

    libraryDependencies ++= Seq(
      "edu.berkeley.cs" %% "chisel3"    % chiselVersion,
      "edu.berkeley.cs" %% "chiseltest" % "0.5.6" % Test,
      "org.scalatest"   %% "scalatest"  % "3.2.18" % Test
    ),

    // Fixed line below:
    addCompilerPlugin(
      "edu.berkeley.cs" % "chisel3-plugin" % chiselVersion cross CrossVersion.full
    ),

    scalacOptions ++= Seq(
      "-Xplugin-require:chiselplugin",
      "-deprecation",
      "-feature"
    ),

    Test / scalacOptions += "-Xplugin-require:chiselplugin"
  )