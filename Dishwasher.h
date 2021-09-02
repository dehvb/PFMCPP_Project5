#pragma once

#include "LeakedObjectDetector.h"

struct Dishwasher
{
    Dishwasher();
    ~Dishwasher();

    int capacityPlates { 15 };
    int capacityCupsGlasses { 18 };
    int capacityCutlery, timePerRun;
    double waterConsumption;

    struct Dishes
    {
        Dishes();
        ~Dishes();

        float oiliness;
        int soupBowls { 4 };
        int regularPlates { 12 };
        int cups, glasses;
        void clogDrain(std::string residues = "too much");
        void tarnish(bool isSensitive = false);
        void shatter(bool isPiledBadly = false);

        int puttingInGlasses(int toClean = 5, int room = 18);

        void soupBowlCounter();

        JUCE_LEAK_DETECTOR(Dishes)
    };

    void cleanDishes(Dishes dishes);
    void dryDishes(bool shouldDryDishes = true, int temp = 55);
    void selfClean(int afterRun = 45);

    int alarm(int remainingTime = 100);

    Dishes dishes;
    void updateOiliness(float oiliness);

    void cutleryCounter();

    JUCE_LEAK_DETECTOR(Dishwasher)
};
