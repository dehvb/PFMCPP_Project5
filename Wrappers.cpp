#include "Wrappers.h"
#include "Dishwasher.h"
#include "Oven.h"
#include "Stove.h"
#include "KitchenCatalog.h"
#include "KitchenStuff.h"


//Dishwasher
DishwasherWrapper::DishwasherWrapper(Dishwasher* ptr) :
pointerToDishwasher(ptr)
{}

DishwasherWrapper::~DishwasherWrapper()
{
    delete pointerToDishwasher;
}


//Dishes
DishesWrapper::DishesWrapper(Dishwasher::Dishes* ptr) :
pointerToDishes(ptr)
{}

DishesWrapper::~DishesWrapper()
{
    delete pointerToDishes;
}


//Oven
OvenWrapper::OvenWrapper(Oven* ptr) :
pointerToOven(ptr)
{}

OvenWrapper::~OvenWrapper()
{
    delete pointerToOven;
}


//Stove
StoveWrapper::StoveWrapper(Stove* ptr) :
pointerToStove(ptr)
{}

StoveWrapper::~StoveWrapper()
{
    delete pointerToStove;
}


//KitchenCatalog
KitchenCatalogWrapper::KitchenCatalogWrapper(KitchenCatalog* ptr) :
pointerToKitchenCatalog(ptr)
{}

KitchenCatalogWrapper::~KitchenCatalogWrapper()
{
    delete pointerToKitchenCatalog;
}


//KitchenStuff
KitchenStuffWrapper::KitchenStuffWrapper(KitchenStuff* ptr) :
pointerToKitchenStuff(ptr)
{}

KitchenStuffWrapper::~KitchenStuffWrapper()
{
    delete pointerToKitchenStuff;
}
