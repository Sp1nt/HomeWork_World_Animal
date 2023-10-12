#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

#define SIZE 10

class AnimalWorld
{
	Herbivore** herb = new Herbivore * [SIZE];
	Carnivore** carn = new Carnivore * [SIZE];
public:
	//animal counter
	static unsigned int herbN;
	static unsigned int carnN;
	//client method that initiates all herbivores/all carnivores
	void mealsHerb();
	void nutritionCarn();

	//adding carnivores and herbivores
	void AddCarn(Carnivore*);
	void AddHerb(Herbivore*);


};

