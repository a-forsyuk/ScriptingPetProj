cmake_minimum_required (VERSION 3.8)

LIST(APPEND LNCH_SRCS
	"ScriptingPetProj.cpp"
	"ScriptingPetProj.h"
	)

add_executable (ScriptingPetProj ${LNCH_SRCS})

target_link_libraries(ScriptingPetProj ScriptingCore)