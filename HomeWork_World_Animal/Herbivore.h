#pragma once
#include <iostream>
#include "Continent.h"
using namespace std;

class Herbivore
{
protected:
	char* name;
	double weight;
	bool isLife;
	Continent* cont;
public:
	virtual void eatGrass() = 0;
	virtual ~Herbivore() = 0;
	virtual void Print()const = 0;

	double GetWeight() const;

	char* GetName() const;
	bool GetIsLife() const;
	void SetIsLife(bool);
};

