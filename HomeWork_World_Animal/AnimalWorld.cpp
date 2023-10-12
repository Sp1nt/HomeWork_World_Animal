#include <iostream>
#include "AnimalWorld.h"

using namespace std;

unsigned int AnimalWorld::herbN = 0;
unsigned int AnimalWorld::carnN = 0;


void AnimalWorld::AddHerb(Herbivore* a)
{
	if (herbN < SIZE)
	{
		herb[herbN++] = a;
	}
}

void AnimalWorld::AddCarn(Carnivore* a)
{
	if (carnN < SIZE)
	{
		carn[carnN++] = a;
	}
}

void AnimalWorld::mealsHerb()
{
	for (int i = 0; i < herbN; i++)
	{
		herb[i]->eatGrass();
	}
}

void AnimalWorld::nutritionCarn()
{
	for (int i = 0; i < carnN; i++)
	{
		if (herb[i]->GetIsLife())
		{
			carn[i]->eatHerb(herb[i]);
		}
	}
}
