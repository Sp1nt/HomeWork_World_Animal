#include <iostream>
#include "Africa.h"
#include "NorthAmerica.h"
#include "Continent.h"
#include "Herbivore.h"
#include "Carnivore.h"
#include "Bison.h"
#include "Wildebeest.h"
#include "Lion.h"
#include "Wolf.h"
#include "AnimalWorld.h"



int main() {
	AnimalWorld animalWorld;

	Continent* africa = new Africa("Africa", 1000, 35);
	africa->Print();
	cout << endl << endl;

	Continent* northAmerica = new NorthAmerica("North America", 1000, 20);
	northAmerica->Print();
	cout << endl << endl;

	Carnivore* lion = new Lion("Lion", 250, africa, &animalWorld);
	lion->Print();
	cout << endl << endl;

	Carnivore* wolf = new Wolf("Wolf", 75, northAmerica, &animalWorld);
	wolf->Print();
	cout << endl << endl;


	Herbivore* wildebeest = new Wildebeest("Wildebeest", 78, true, africa, &animalWorld);
	wildebeest->Print();
	cout << endl << endl;

	Herbivore* bison = new Bison("Bison", 300, true, northAmerica, &animalWorld);
	bison->Print();
	cout << endl << endl;

	cout << "Count herbivore:" << AnimalWorld::herbN << endl << "Count carnivore:" << AnimalWorld::carnN << endl;

	cout << endl << endl;
	cout << endl << endl;

	cout << "Herbivores eat grass: " << endl;
	animalWorld.mealsHerb();

	cout << endl;

	wildebeest->Print();
	cout << endl << endl;
	bison->Print();
	cout << endl << endl;


	cout << "Carnivores eat herbivores: " << endl;
	animalWorld.nutritionCarn();

	cout << endl;

	wildebeest->Print();
	cout << endl << endl;
	bison->Print();
	cout << endl << endl;

	lion->Print();
	cout << endl << endl;
	wolf->Print();
	cout << endl << endl;

	return 0;

}