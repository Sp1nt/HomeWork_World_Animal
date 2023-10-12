#include "Bison.h"

Bison::Bison(const char* n, double w, bool il, Continent* c, AnimalWorld* an)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    an->AddHerb(this);

    isLife = true;
    weight = w;
    cont = c;
}

void Bison::eatGrass()
{
    if (isLife)
    {
        weight += 10;
        cout << "Bison is eating grass. Weight increased by 10. New weight: " << weight << endl;
    }
    else
    {
        cout << "Bison is not alive and cannot eat." << endl;
    }
}

void Bison::Print() const
{
    cout << "Species: " << name << endl;
    cout << "Weight: " << weight << endl;
    cout << "Is alive? " << boolalpha << isLife << endl;
}

char* Bison::GetContinent() const
{
    return cont->GetContinent();
}


Bison::~Bison()
{
    delete name;
}