#pragma once

#include "LeakedObjectDetector.h"

struct Stove
{
    Stove();
    ~Stove();
    
    std::string typeStove;
    int numberHotplates { 4 };
    int hotplatesInUse { 1 };
    double largestDiam, smallestDiam;

    void boilWater(int setLevel = 9);
    void frySteaks(int setLevel = 7);
    void makeSoup(int setLevel = 5);

    int cookBigMeal(int numPotsNeeded = 5, int inUse = 0);

    void potSizePossibilities();

    JUCE_LEAK_DETECTOR(Stove)
};
