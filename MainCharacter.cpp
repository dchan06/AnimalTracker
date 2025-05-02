//
// Created by David Chan on 1/5/25.
//

#include "MainCharacter.h"
#include "Bear.h"
#include "Fish.h"



int getRandomNumber(int min, int max) {
    // Create a random device and seed the generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define the distribution range [min, max]
    std::uniform_int_distribution<> distrib(min, max);

    return distrib(gen);
}

unique_ptr<vector<Animal*>> allocateAnimals(int n) {
    vector<Animal*> animals;
    auto createAnimal = [](const int &randomNum) -> Animal* {
        switch (randomNum) {
            case 1: return new Bear();
            break;
            case 2: return new Fish();
            break;
            default: return nullptr;
        }
    };
    for (int i = 0; i < n; i++) {
        int r = getRandomNumber(1, 2);
        animals.push_back(createAnimal(r));
    }
    return make_unique<vector<Animal*>>(move(animals));
}

MainCharacter::MainCharacter() {
    dataLog(*allocateAnimals(10));
}

MainCharacter::~MainCharacter() {

}

void MainCharacter::dataLog(const vector<Animal*> a) {
    animalNearby(a);
    cout << "Current Locality" << "X: " << location.first << " Y: " << location.second << endl;
    cout << "Threats: " << threatCount << endl;
    cout << "Prey: " << preyCount << endl;
    if (preyCount != 0) {
        for (int i = 0; i < preyCount; i++) {
            catchMultiplier++;
        }
        catchMultiplier *= preyCount;
    }
    if (threatCount != 0) {
        for (int j = 0; j < threatCount; j++) {
            catchMultiplier--;
        }
    }
}