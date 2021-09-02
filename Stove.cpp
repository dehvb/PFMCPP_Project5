#include <iostream>
#include "Stove.h"

Stove::Stove() :
    typeStove("induction"),
    largestDiam(28.5),
    smallestDiam(14.5)
{}

Stove::~Stove()
{
    std::cout << "Oven destroyed" << std::endl;
}

void Stove::boilWater(int setLevel)
{
    std::cout << "boiling water, setting level to " << setLevel << " on 1 of " << numberHotplates << " hotplates" << std::endl;
}

void Stove::frySteaks(int setLevel)
{
    std::cout << "frying steaks, setting level to " << setLevel << std::endl;
}

void Stove::makeSoup(int setLevel)
{
    std::cout << "making soup, setting level to " << setLevel << std::endl;
}

int Stove::cookBigMeal(int numPotsNeeded, int inUse)
{
    hotplatesInUse = inUse;
    while(hotplatesInUse < numberHotplates && numPotsNeeded > 0)
    {
        --numPotsNeeded;
        ++hotplatesInUse;
        if(hotplatesInUse == numberHotplates) 
        {
            std::cout << "no more room" << std::endl;
        }
        
        std::cout << (numPotsNeeded == 0 ? 
                        "all pots on the stove" : 
                        std::string("still ") + std::to_string(numPotsNeeded) + " pot(s) more needed") 
                    << std::endl;
    }
    return numPotsNeeded;
}

void Stove::potSizePossibilities()
{
    std::cout << "You can use pots with a diameter between " << this->smallestDiam << " and " << this->largestDiam << " centimeters" << std::endl;
}
