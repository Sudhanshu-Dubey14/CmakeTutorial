set(Functions functions.cpp )
set(Numbers numbers.cpp )
 
include_directories(${PROJECT_SOURCE_DIR}/include) // including the directories

add_executable(function ${Functions})  //Add executables files
add_executable(numbers ${Numbers})

target_link_libraries(function lib)
target_link_libraries(numbers lib)

install(TARGETS function numbers DESTINATION ${PROJECT_SOURCE_DIR}/bin)
//Installing various directories