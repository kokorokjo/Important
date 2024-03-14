# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\audio_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\audio_autogen.dir\\ParseCache.txt"
  "audio_autogen"
  )
endif()
