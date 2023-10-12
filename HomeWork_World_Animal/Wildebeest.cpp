#include "Wildebeest.h"

Wildebeest::Wildebeest(const char* n, double w, bool il, Continent* c, AnimalWorld* an)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    an->AddHerb(this);

    isLife = true;
    weight = w;
    cont = c;
}

void Wildebeest::eatGrass()
{
    if (isLife)
    {
        weight += 10;
        cout << "Wildebeest is eating grass. Weight increased by 10. New weight: " << weight << endl;
    }
    else
    {
        cout << "Wildebeest is not alive and cannot eat." << endl;
    }
}

void Wildebeest::Print() const
{
    cout << "Species: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Is alive? " << boolalpha << isLife << endl;
}

Wildebeest::~Wildebeest()
{
    delete name;
}