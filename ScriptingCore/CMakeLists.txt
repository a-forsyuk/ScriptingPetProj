cmake_minimum_required (VERSION 3.8)

project(ScriptingCore)

LIST(APPEND SRCS
	"TestClass.cpp"
	"TestClass.h"
	"ScriptingCoreLib.h"
	)

add_library(ScriptingCore SHARED ${SRCS})