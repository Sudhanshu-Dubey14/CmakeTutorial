set(Functions functions.cpp )
set(Numbers numbers.cpp )
 
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(function ${Functions})
add_executable(numbers ${Numbers})

target_link_libraries(function lib)
target_link_libraries(numbers lib)

install(TARGETS function numbers DESTINATION path/to/directory)
