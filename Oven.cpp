#include <iostream>
#include "Oven.h"

Oven::Oven() :
numberBakingSheets(3),
numberPrograms(5),
currentProgram("top heat")
{}

Oven::~Oven()
{
    std::cout << "Oven destroyed" << std::endl;
}

void Oven::bakeCake(std::string typeOfCake, int preHeat)
{
    std::cout << "baking an " << typeOfCake << " pie, preheating to " << preHeat << std::endl;
}

void Oven::bakePizza(std::string typeOfPizza, int preHeat)
{
    std::cout << "baking a pizza " << typeOfPizza << ", preheating to " << preHeat << " although we can try " << highestTemp << " some time" << std::endl;
}

void Oven::makeRoast(std::string typeOfRoast, int setTemp)
{
    std::cout << "making a " << typeOfRoast << " roast, setting Temperature to " << setTemp << std::endl;
}

int Oven::adjustTemp(int targetTemp, int current)
{
    current = currentTemp;
    std::cout << "current: " << currentTemp << ", target is: " << targetTemp << std::endl;
    int dir = (current < targetTemp ? 1 : -1);
    while(current > targetTemp)
    {
        current += dir;
        currentTemp = current;
    }
    std::cout << "current: " << currentTemp << ", reached target of: " << targetTemp << std::endl;
    return current;
}

void Oven::printMaxTemp()
{
    std::cout << "It goes up to " << this->highestTemp << " degrees Celsius" << std::endl;
}
