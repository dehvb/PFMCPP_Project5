#pragma once

#include "LeakedObjectDetector.h"

struct Oven
{
    Oven();
    ~Oven();

    int numberBakingSheets, numberPrograms;
    int highestTemp { 300 };
    int currentTemp { 220 };
    std::string currentProgram;

    void bakeCake(std::string typeOfCake = "apple", int preHeat = 180);
    void bakePizza(std::string typeOfPizza = "margherita", int preHeat = 220);
    void makeRoast(std::string typeOfRoast = "beef", int setTemp = 230);

    int adjustTemp(int targetTemp = 200, int current = 25);

    void printMaxTemp();

    JUCE_LEAK_DETECTOR(Oven)
};
