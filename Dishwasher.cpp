#include <iostream>
#include "Dishwasher.h"

Dishwasher::Dishwasher() :
capacityCutlery(30),
timePerRun(135),
waterConsumption(30.5)
{}

Dishwasher::~Dishwasher()
{
    std::cout << "Dishwasher destroyed" << std::endl;
}

Dishwasher::Dishes::Dishes() :
oiliness(25.76f),
cups(8),
glasses(5)
{}

Dishwasher::Dishes::~Dishes()
{
    std::cout << "Dishes destroyed" << std::endl;
}

void Dishwasher::updateOiliness(float oiliness)
{
    dishes.oiliness = oiliness;
}

void Dishwasher::cutleryCounter()
{
    std::cout << "room for " << this->capacityCutlery << " pieces of cutlery" << std::endl;
}

void Dishwasher::Dishes::clogDrain(std::string residues)
{
    if(residues == "too much")
    {
        std::cout << "clogged" << std::endl;
    }
}

void Dishwasher::Dishes::tarnish(bool isSensitive)
{
    if(isSensitive)
    {
        std::cout << "cutlery successfully tarnished" << std::endl;
    }
}

void Dishwasher::Dishes::shatter(bool isPiledBadly)
{
    if(isPiledBadly)
    {
        std::cout << "let's break some stuff, e.g. " << cups << " cups" << std::endl;
    }
}

int Dishwasher::Dishes::puttingInGlasses(int toClean, int room)
{
    int spaceLeft = room - glasses - cups;
    std::cout << "glass(es) to put away: " << toClean << std::endl;
    while(spaceLeft > 0 && toClean > 0)
    {
        --toClean;
        ++glasses;
        --spaceLeft;
    }
    std::cout << "any glasses left?" << std::endl;
    toClean == 0 ? std::cout << "all in there" << std::endl : std::cout << "yeah, " << toClean << ", but there's no more room..." << std::endl;
    return spaceLeft;
}

void Dishwasher::Dishes::soupBowlCounter()
{
    std::cout << "here's " << this->soupBowls << " soupbowls" << std::endl;
}

void Dishwasher::cleanDishes(Dishwasher::Dishes newDishes)
{
    if(newDishes.oiliness > 0)
    {
        std::cout << "dishes are dirty, oiliness: " << newDishes.oiliness << std::endl;
        std::cout << "cleaning dishes, this will take " << timePerRun << " minutes" << std::endl;
        newDishes.oiliness = 0.f;
        dishes.oiliness = newDishes.oiliness;
        dishes.soupBowls = newDishes.soupBowls;
        dishes.regularPlates = newDishes.regularPlates;
        dishes.cups = newDishes.cups;
        dishes.glasses = newDishes.glasses;
        std::cout << "dishes cleaned, oiliness: " << dishes.oiliness << std::endl;
    }
    else
    {
        std::cout << "dishes are not dirty, oiliness: " << dishes.oiliness << std::endl;
    }
}

void Dishwasher::dryDishes(bool shouldDryDishes, int temp)
{
    if(shouldDryDishes)
    {
        if(temp < 55)
        {
            std::cout << "raising temperature to 55" << std::endl;
        }
    }
}

void Dishwasher::selfClean(int afterRun)
{
    if(afterRun >= 45)
    {
        std::cout << "let's clean" << std::endl;
    }
    else
    {
        std::cout << "not yet" << std::endl;
    }
}

int Dishwasher::alarm(int remainingTime)
{
    remainingTime = timePerRun;
    while(remainingTime > 0)
    {
        --remainingTime;
        if(remainingTime == 0)
        {
            std::cout << std::endl << "beep beep beep" << std::endl;
        }
        else
        {
            std::cout << "M";
        }
    }
    return remainingTime;
}
