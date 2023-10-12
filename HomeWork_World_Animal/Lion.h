#pragma once
#include <iostream>
#include "Carnivore.h"
#include "Continent.h"
#include "Herbivore.h"
#include "AnimalWorld.h"

using namespace std;

class Lion : public Carnivore
{
public:
	Lion(const char*, int, Continent*, AnimalWorld*);
	//initiates a specific animal to eat
	void eatHerb(Herbivore*);
	void Print() const;

	~Lion();
};

