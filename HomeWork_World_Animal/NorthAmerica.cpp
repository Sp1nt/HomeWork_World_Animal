#include "NorthAmerica.h"


NorthAmerica::NorthAmerica(const char* cont, double ter, double t) : Continent(cont, ter, t)
{
}

void NorthAmerica::Print()
{
	cout << "Continent: " << continent << endl;
	cout << "Territory: " << territory << endl;
	cout << "Temperature: " << temperature << endl;
}
