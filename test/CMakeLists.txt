cmake_minimum_required(VERSION 3.15)
project(console-tic-tac-toe)

add_executable( test 
../src/main.cpp
../src/board.cpp
../src/game.cpp
../src/inputValidator.cpp
../src/gameManager.cpp
../src/turnManager.cpp
../src/outputFormatter.cpp
)