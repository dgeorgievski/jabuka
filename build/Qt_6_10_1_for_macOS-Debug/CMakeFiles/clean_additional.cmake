# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/jabuka_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/jabuka_autogen.dir/ParseCache.txt"
  "jabuka_autogen"
  )
endif()
