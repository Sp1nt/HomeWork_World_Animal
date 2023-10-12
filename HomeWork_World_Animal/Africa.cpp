#include "Africa.h"


Africa::Africa(const char* cont, double ter, double t) :Continent(cont, ter, t)
{
}

void Africa::Print()
{
	cout << "Continent: " << continent << endl;
	cout << "Territory: " << territory << endl;
	cout << "Temperature: " << temperature << endl;
}
