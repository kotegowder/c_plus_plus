cmake_minimum_required(VERSION 3.10)

get_filename_component(PROJECT_ROOT . ABSOLUTE)

if(NOT DEFINED DEFAULT_PROGRAM)
	set(DEFAULT_PROGRAM ON)
	set(SOURCE_LIST hello_world.cpp CACHE INTERNAL "Default program" FORCE)
endif()

if(${DEFAULT_PROGRAM})
	message(STATUS "[STATUS] : Running default hello_world program")
	add_executable(out ${PROJECT_ROOT}/${SOURCE_LIST})
endif()
