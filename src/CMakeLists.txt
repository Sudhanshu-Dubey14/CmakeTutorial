set(Functions functions.cpp )
set(Numbers numbers.cpp )
 
include_directories(${PROJECT_SOURCE_DIR}/include)
#LINK_DIRECTORIES(${directory_SOURCE_DIR}/include)

add_executable(function ${Functions})
add_executable(numbers ${Numbers})

target_link_libraries(function lib)
target_link_libraries(numbers lib)

install(TARGETS function numbers DESTINATION /home/sudhanshu/Documents/cmake/testrun/bin)
