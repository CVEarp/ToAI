cmake_minimum_required(VERSION 2.8)
project( generate_table )
find_package( OpenCV REQUIRED )


add_executable( generate_table q_table.cpp )
target_link_libraries( generate_table ${OpenCV_LIBS} )

add_executable( read_table read.cpp )
target_link_libraries( read_table ${OpenCV_LIBS} )
