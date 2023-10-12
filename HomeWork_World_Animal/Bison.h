#pragma once
#include <iostream>
#include "Continent.h"
#include "Herbivore.h"
#include "AnimalWorld.h"

using namespace std;

class Bison :public Herbivore
{
public:
    Bison(const char* name, double weight, bool isLife, Continent* cont, AnimalWorld* an);
    void eatGrass();
    void Print() const;

    ~Bison();
};