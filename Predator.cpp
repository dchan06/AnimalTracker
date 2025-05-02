//
// Created by David Chan on 1/5/25.
//

#include "Predator.h"
#include "Bear.h"
#include "Fish.h"

using namespace std;



Predator::Predator() {
    type = "Pred";
}

Predator::~Predator() {

}

void Predator::dataLog() {

}

void Predator::move(int x, int y)
{
    location.first = x;
    location.second = y;
}