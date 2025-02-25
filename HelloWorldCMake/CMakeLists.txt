cmake_minimum_required(VERSION 3.5)
project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "Project named hello world"
        LANGUAGES CXX)

add_executable(HelloAppBinary main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)




# mkdir build
# cd build
# cmake .. -G "Visual Studio 17 2022"
# cmake --build . --config Release
# cd Release 
# ./HelloApp.exe

