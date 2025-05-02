//
// Created by David Chan on 1/5/25.
//

#ifndef PREY_H
#define PREY_H
#include "Animal.h"



class Prey : public Animal {
protected:
    Prey() {
        type = "Prey";
    }
    void hide() {

    }
    void move(int x, int y) override {
        location.first = x;
        location.second = y;
    }
};



#endif //PREY_H
