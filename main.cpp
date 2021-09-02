/*
 Project 5: Part 4 / 4
 video: Chapter 3 Part 7

 Create a branch named Part4
 
 Don't #include what you don't use
 
 1) Your task is to refactor your Chapter 3 Part 4 task into separate source and header files.
         Add files via the pane on the left.
 
 2) Put all of your declarations for each class in .h files
         One header file per class ( i.e. Raider.h for a class named "Raider" )
 
 3) Put all of your implementations in .cpp files.
         one cpp file per class ( i.e. Raider.cpp for a class named "Raider" )
 
 4) Put all of your Wrapper classes in a single Wrappers.h file
         if you implemented your wrapper class functions in-class, you'll need to move them to Wrappers.cpp
 
 5) NO IN-CLASS IMPLEMENTATION ALLOWED.
         the only exception is the existing Atomic.h and LeakedObjectDetector.h
 
 6) for every .cpp file you have to make, insert it into the .replit file after 'main.cpp'.  Don't forget the spaces between file names.
 If you need help with this step, send me a DM.
 
 7) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Remember, your Chapter 3 Part 4 task worked when it was all in one file. so you shouldn't need to edit any of it.  
         just split it up into source files and provide the appropriate #include directives.
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
#include "LeakedObjectDetector.h"
#include "Dishwasher.h"
#include "Oven.h"
#include "Stove.h"
#include "KitchenCatalog.h"
#include "KitchenStuff.h"
#include "Wrappers.h"

int main()
{
    DishesWrapper myDishes(new Dishwasher::Dishes);
    myDishes.pointerToDishes->oiliness = 9001.f;
    DishwasherWrapper dishwasher(new Dishwasher);
    dishwasher.pointerToDishwasher->cleanDishes(*myDishes.pointerToDishes);

    dishwasher.pointerToDishwasher->updateOiliness(123.45f);
    dishwasher.pointerToDishwasher->dryDishes();
    dishwasher.pointerToDishwasher->alarm();

    dishwasher.pointerToDishwasher->dishes.tarnish(true);

    dishwasher.pointerToDishwasher->dishes.shatter(true);
    dishwasher.pointerToDishwasher->dishes.puttingInGlasses(2,18);
    dishwasher.pointerToDishwasher->dishes.puttingInGlasses(9,18);

    std::cout << "room for " << dishwasher.pointerToDishwasher->capacityCutlery << " pieces of cutlery" << std::endl;
    dishwasher.pointerToDishwasher->cutleryCounter();
    std::cout << "here's " << myDishes.pointerToDishes->soupBowls << " soupbowls" << std::endl;
    myDishes.pointerToDishes->soupBowlCounter();

    OvenWrapper oven(new Oven);
    oven.pointerToOven->bakePizza();
    oven.pointerToOven->adjustTemp();
    std::cout << "How high does it go?" << std::endl;
    std::cout << "It goes up to " << oven.pointerToOven->highestTemp << " degrees Celsius" << std::endl;
    oven.pointerToOven->printMaxTemp();

    StoveWrapper stove(new Stove);
    stove.pointerToStove->boilWater();
    stove.pointerToStove->cookBigMeal();
    std::cout << "You can use pots with a diameter between " << stove.pointerToStove->smallestDiam << " and " << stove.pointerToStove->largestDiam << " centimeters" << std::endl;
    stove.pointerToStove->potSizePossibilities();

    KitchenCatalogWrapper kitchenCatalog(new KitchenCatalog);
    kitchenCatalog.pointerToKitchenCatalog->displayPage(2);
    kitchenCatalog.pointerToKitchenCatalog->displayPage(5);
    kitchenCatalog.pointerToKitchenCatalog->shippingCost(1, 3, 5);
    kitchenCatalog.pointerToKitchenCatalog->shippingCost(0, 0, 2);
    std::cout << "The shipping for an oven is " << kitchenCatalog.pointerToKitchenCatalog->shippingCost(0, 1, 0) << " Euro" << std::endl;
    kitchenCatalog.pointerToKitchenCatalog->shippingForAnOven();

    KitchenStuffWrapper kitchenStuff(new KitchenStuff);
    kitchenStuff.pointerToKitchenStuff->usingOven("pizza");
    kitchenStuff.pointerToKitchenStuff->usingStove("water");
    std::cout << "A run takes " << kitchenStuff.pointerToKitchenStuff->myDishwasher.timePerRun << " minutes" << std::endl;
    kitchenStuff.pointerToKitchenStuff->dishwasherTime();

    std::cout << "good to go!" << std::endl;
}
