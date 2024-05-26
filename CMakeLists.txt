cmake_minimum_required(VERSION 3.15)
project(console-tic-tac-toe)

add_subdirectory(test)
add_executable( main 
                src/main.cpp
                src/board.cpp
                src/game.cpp
                src/inputValidator.cpp
                src/outputFormatter.cpp
                src/stateManager.cpp
                src/turnManager.cpp
                src/gameOver.cpp
)
