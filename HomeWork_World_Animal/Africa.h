#pragma once
#include <iostream>
#include "Continent.h"

using namespace std;

class Africa : public Continent
{
public:
	Africa(const char*, double, double);

	void Print();

};

