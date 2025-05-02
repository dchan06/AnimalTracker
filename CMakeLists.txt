cmake_minimum_required(VERSION 3.30)
project(AnimalTracker)

set(CMAKE_CXX_STANDARD 17)

add_executable(AnimalTracker main.cpp
        Animal.cpp
        Animal.h
        Prey.cpp
        Prey.h
        Predator.cpp
        Predator.h
        Bear.cpp
        Bear.h
        Fish.cpp
        Fish.h
        MainCharacter.cpp
        MainCharacter.h)
