#include <iostream>
#include "KitchenCatalog.h"

KitchenCatalog::KitchenCatalog()
{
    std::cout << "KitchenCatalog constructed" << std::endl;
}

KitchenCatalog::~KitchenCatalog()
{
    std::cout << "KitchenCatalog destroyed" << std::endl;
}

void KitchenCatalog::displayPage(int pageNumber)
{
    if (pageNumber == 1)
    {
        std::cout << "look at this dishwasher, up to " << myDishwasher.capacityCupsGlasses << " cups or glasses will fit in!" << std::endl;
    }
    else if (pageNumber == 2)
    {
        std::cout << "look at this oven, it can go up to " << myOven.highestTemp << " degrees Celsius!" << std::endl;
    }
    else if (pageNumber == 3)
    {
        std::cout << "look at this stove, it's hotplates go from " << myStove.smallestDiam << " cm to " << myStove.largestDiam << " cm in diameter!" << std::endl;
    }
    else 
    {
        std::cout << "there's no page " << pageNumber << ", try 1, 2, or 3" << std::endl;
    }
}

double KitchenCatalog::shippingCost(int numDshwsh, int numOvn, int numStv)
{
    double totalPrice;
    totalPrice = numDshwsh * 599.99 + numOvn * 499.99 + numStv * 449.99;
    double shipping = (totalPrice > 1000. || totalPrice == 0.) ? 0. : 24.99;
    std::cout << "Shipping will cost " << shipping << " Euro for your order with a total of " << totalPrice << " Euro" << std::endl;
    return shipping;
}

void KitchenCatalog::shippingForAnOven()
{
    std::cout << "The shipping for an oven is " << this->shippingCost(0, 1, 0) << " Euro" << std::endl;
}
