cmake_minimum_required(VERSION 3.10)

get_filename_component(PROJECT_ROOT . ABSOLUTE)

if(NOT DEFINED DEFAULT_PROGRAM)
	set(DEFAULT_PROGRAM ON)
endif()

if(${DEFAULT_PROGRAM})
	set(SOURCE_LIST hello_world.cpp CACHE INTERNAL "Default program" FORCE)
else()
	list(APPEND SOURCE_LIST main.cpp
		                variables.cpp
			        strings.cpp
			        input.cpp
				integerTypes.cpp
				floatingTypes.cpp
				otherTypes.cpp
				if.cpp
				loop.cpp
				array.cpp
				switch.cpp
					)
endif()

if(${DEFAULT_PROGRAM})
	message(STATUS "[STATUS] : Running default hello_world program")
endif()
add_executable(out ${PROJECT_ROOT}/${SOURCE_LIST})
