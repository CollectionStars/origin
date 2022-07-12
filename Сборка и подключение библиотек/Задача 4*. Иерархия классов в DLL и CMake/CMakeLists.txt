cmake_minimum_required(VERSION 3.0.0)
project (DllCmakeClasses)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) 
add_library (DynamicLibCmake SHARED
								Equ_Triangle.h Equ_Triangle.cpp 
								Figure.h Figure.cpp
								Iso_Triangle.h Iso_Triangle.cpp
								Parallelogram.h Parallelogram.cpp
								Quadrangle.h Quadrangle.cpp
								Rect_Triangle.h Rect_Triangle.cpp
								Rectangle.h Rectangle.cpp
								Rhombus.h Rhombus.cpp
								Square.h Square.cpp
								Triangle.h Triangle.cpp)
add_executable(CmakeLib main.cpp)
target_link_libraries (CmakeLib DynamicLibCmake)