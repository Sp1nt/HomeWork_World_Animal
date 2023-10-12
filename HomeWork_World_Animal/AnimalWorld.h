#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

#define SIZE 10

class AnimalWorld
{
	Herbivore** herb = new Herbivore * [SIZE];
	Carnivore** carn = new Carnivore * [SIZE];
public:
	static unsigned int herbN;
	static unsigned int carnN;

	void mealsHerb();
	void nutritionCarn();

	void AddCarn(Carnivore*);
	void AddHerb(Herbivore*);


};

