#include <iostream>
#include "KitchenStuff.h"

KitchenStuff::KitchenStuff()
{
    std::cout << "KitchenStuff constructed" << std::endl;
}

KitchenStuff::~KitchenStuff()
{
    std::cout << "Kitchenstuff destroyed" << std::endl;
}

void KitchenStuff::usingOven(std::string myDish)
{
    if (myDish == "cake")
    {
        myOven.bakeCake();
        myDishes.oiliness = 10.f;
        myDishwasher.cleanDishes(myDishes);
    }
    else if (myDish == "pizza")
    {
        myOven.bakePizza();
        myDishes.oiliness = 25.f;
        myDishwasher.cleanDishes(myDishes);
    }
    else if (myDish == "roast")
    {
        myOven.makeRoast();
        myDishes.oiliness = 25.f;
        myDishwasher.cleanDishes(myDishes);
    }
}

void KitchenStuff::usingStove(std::string myDish)
{
    if (myDish == "water")
    {
        myStove.boilWater();
        myDishes.oiliness = 0.f;
        myDishwasher.cleanDishes(myDishes);
        std::cout << "It's only water, just let it dry" << std::endl;
    }
    else if (myDish == "steak")
    {
        myStove.frySteaks();
        myDishes.oiliness = 22.5f;
        myDishwasher.cleanDishes(myDishes);
    }
    else if (myDish == "soup")
    {
        myStove.makeSoup();
        myDishes.oiliness = 7.5f;
        myDishwasher.cleanDishes(myDishes);
    }
}

void KitchenStuff::dishwasherTime()
{
    std::cout << "A run takes " << this->myDishwasher.timePerRun << " minutes" << std::endl;
}
