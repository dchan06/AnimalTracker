//
// Created by David Chan on 1/5/25.
//

#ifndef PREDATOR_H
#define PREDATOR_H
#include "Animal.h"
#include <random>


class Predator : public Animal {
protected:
    Predator () ;
    ~Predator() override;
    int jawStrength;
    int iq;
    int catchMultiplier = 0;
    void move(int x, int y) override;
    void hunt();
    virtual void dataLog();
};



#endif //PREDATOR_H
