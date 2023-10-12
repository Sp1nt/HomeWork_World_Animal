#pragma once
#include <iostream>
#include "Continent.h"
#include "Herbivore.h"
#include "AnimalWorld.h"

using namespace std;
class Wildebeest :public Herbivore
{
public:
    Wildebeest(const char* name, double weight, bool isLife, Continent* cont, AnimalWorld* an);
    void eatGrass();
    void Print() const;
    ~Wildebeest();
};

