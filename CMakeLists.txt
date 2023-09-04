cmake_minimum_required(VERSION 3.26)
project(asmPars)

set(CMAKE_CXX_STANDARD 17)

add_executable(asmPars
		src/Add.cpp
		src/Command.cpp
		src/FileReader.cpp
		src/IOConsole.cpp
		src/main.cpp
		src/Mov.cpp
		src/Mul.cpp
		src/Parsing.cpp
		src/Program.cpp
		src/Sub.cpp
		src/Sub.h
		src/Div.cpp
		src/Div.h)
