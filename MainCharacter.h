//
// Created by David Chan on 1/5/25.
//

#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H
#include "Predator.h"



class MainCharacter : public Predator{
public:
    MainCharacter();
    ~MainCharacter() override;
    void dataLog(vector<Animal*> a);
};



#endif //MAINCHARACTER_H
