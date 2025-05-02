//
// Created by David Chan on 1/5/25.
//

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

using namespace std;

template<typename T>
T checkBothCoords(T a, T b) {
    return a && b;
}

template<typename T>
T animalsNearby(T myPos, T otherPos) {
    otherPos -= 5;
    for (int i = 0; i < 10; i++) {
        otherPos++;
        if (otherPos == myPos) {
            return true;
        }
    }
    return false;
}

class Animal {
protected:
    int movementSpeed;
    pair<int, int> location = {1, 1};
    string type;
    virtual void move(int x, int y) = 0;
    int threatCount = 0;
    int preyCount = 0;
    Animal() {

    }
    virtual ~Animal() {

    }
    void animalNearby(vector<Animal*> animals) {
        for (auto a : animals) {
            checkBothCoords(animalsNearby(location.first, a->location.first), animalsNearby(location.second, a->location.second));
            if (a->type == "Pred") {
                threatCount++;
            }
            else if (a->type == "Prey") {
                preyCount++;
            }
        }
    }
};



#endif //ANIMAL_H
