#pragma once
#include <iostream>
#include "Continent.h"

using namespace std;
class NorthAmerica : public Continent
{
public:
	NorthAmerica(const char*, double, double);

	void Print();
};

