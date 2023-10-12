#include "Continent.h"

Continent::Continent()
{
	continent = nullptr;
	territory = 0;
	temperature = 0;

}

Continent::Continent(const char* cont, double ter, double t)
{
	continent = new char[strlen(cont) + 1];
	strcpy_s(continent, strlen(cont) + 1, cont);

	territory = ter;
	temperature = t;
}

char* Continent::GetContinent() const
{
	return continent;
}

double Continent::GetTemperature() const
{
	return temperature;
}

double Continent::GetTerritory() const
{
	return territory;
}

Continent::~Continent()
{
	delete continent;

}