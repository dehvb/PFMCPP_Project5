#pragma once

#include "LeakedObjectDetector.h"
#include "Dishwasher.h"
#include "Oven.h"
#include "Stove.h"

struct KitchenCatalog
{
    KitchenCatalog();
    ~KitchenCatalog();

    Dishwasher myDishwasher;
    Oven myOven;
    Stove myStove;
    
    void displayPage(int pageNumber);
    double shippingCost(int numDshwsh, int numOvn, int numStv);
    void shippingForAnOven();

    JUCE_LEAK_DETECTOR(KitchenCatalog)
};
