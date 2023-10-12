#pragma once
#include <iostream>
#include "Continent.h"
#include "Herbivore.h"
using namespace std;

class Carnivore
{
protected:
	char* name;
	int power;
	Continent* cont;
public:
	Carnivore();
	virtual void eatHerb(Herbivore*) = 0;
	virtual ~Carnivore() = 0;
	virtual void Print() const = 0;

};

