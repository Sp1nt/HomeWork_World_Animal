#pragma once
#include <iostream>
using namespace std;
class Continent
{
protected:
	char* continent;
	double temperature;
	double territory;
public:
	Continent();
	Continent(const char*, double, double);
	char* GetContinent() const;
	double GetTemperature() const;
	double GetTerritory() const;
	virtual void Print() = 0;
	virtual ~Continent() = 0;

};

