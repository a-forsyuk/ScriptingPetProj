cmake_minimum_required (VERSION 3.8)

set(USED_LANGUAGES CXX)

IF(${BUILD_EDITOR})
	list(APPEND USED_LANGUAGES CSharp)
ENDIF()


project ("ScriptingPetProj" ${USED_LANGUAGES})

add_subdirectory ("ScriptingPetProj")
add_subdirectory ("ScriptingCore")

IF(${BUILD_EDITOR})
	add_subdirectory("ScriptingEditor")
ENDIF()