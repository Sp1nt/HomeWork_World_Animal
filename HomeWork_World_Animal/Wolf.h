#pragma once
#include <iostream>
#include "Carnivore.h"
#include "Continent.h"
#include "Herbivore.h"
#include "AnimalWorld.h"

using namespace std;
class Wolf : public Carnivore
{
public:
	Wolf(const char*, int, Continent*, AnimalWorld*);
	void eatHerb(Herbivore*);
	void Print() const;
	~Wolf();
};

