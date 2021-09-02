#pragma once

#include "LeakedObjectDetector.h"
#include "Dishwasher.h"
#include "Oven.h"
#include "Stove.h"

struct KitchenStuff
{
    KitchenStuff();
    ~KitchenStuff();

    Dishwasher myDishwasher;
    Dishwasher::Dishes myDishes;
    Oven myOven;
    Stove myStove;

    void usingOven(std::string myDish);
    void usingStove(std::string myDish);

    void dishwasherTime();

    JUCE_LEAK_DETECTOR(KitchenStuff)
};
