cmake_minimum_required (VERSION 3.8)

SET(SRCS
	Script.cpp
	Script.h
	Node.cpp
	Node.h
	Edge.cpp
	Edge.h
	InputSlot.h
	OutputSlot.h
	ScriptingCoreLib.h
	)

add_library(ScriptingCore INTERFACE)

target_include_directories(ScriptingCore INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})