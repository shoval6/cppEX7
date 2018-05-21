cmake_minimum_required(VERSION 3.10)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled Board.cpp Board.h Pair.cpp Pair.h IllegalCoordinateException.h IllegalCoordinateException.cpp IllegalCharException.cpp IllegalCharException.h DummyPlayers.h DummyPlayers.cpp Player.h TicTacToe.h TicTacToe.cpp main.cpp Champion.h Champion.cpp)