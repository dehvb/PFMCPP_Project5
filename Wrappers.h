#pragma once

#include "Dishwasher.h"

struct Dishwasher;
struct Oven;
struct Stove;
struct KitchenCatalog;
struct KitchenStuff;

//Dishwasher
struct DishwasherWrapper
{
    DishwasherWrapper(Dishwasher* ptr);
    ~DishwasherWrapper();

    Dishwasher* pointerToDishwasher = nullptr;
};

//Dishes
struct DishesWrapper
{
    DishesWrapper(Dishwasher::Dishes* ptr);
    ~DishesWrapper();

    Dishwasher::Dishes* pointerToDishes = nullptr;
};

//Oven
struct OvenWrapper
{
    OvenWrapper(Oven* ptr);
    ~OvenWrapper();

    Oven* pointerToOven = nullptr;
};

//Stove
struct StoveWrapper
{
    StoveWrapper(Stove* ptr);
    ~StoveWrapper();

    Stove* pointerToStove = nullptr;
};

//KitchenCatalog
struct KitchenCatalogWrapper
{
    KitchenCatalogWrapper(KitchenCatalog* ptr);
    ~KitchenCatalogWrapper();

    KitchenCatalog* pointerToKitchenCatalog = nullptr;
};

//KitchenStuff
struct KitchenStuffWrapper
{
    KitchenStuffWrapper(KitchenStuff* ptr);
    ~KitchenStuffWrapper();

    KitchenStuff* pointerToKitchenStuff = nullptr;
};
