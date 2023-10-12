#include "Wolf.h"

Wolf::Wolf(const char* n, int p, Continent* c, AnimalWorld* an)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    an->AddCarn(this);

    power = p;
    cont = c;
}

void Wolf::eatHerb(Herbivore* herbivore)
{
    if (power > herbivore->GetWeight())
    {
        power += 10;
        cout << "Wolf is eating " << herbivore->GetName() << ". Power increased by 10. New power: " << power << endl;
        herbivore->SetIsLife(false);
    }
    else
    {
        power -= 10;
        cout << "Wolf is trying to eat " << herbivore->GetName() << ", but it's too strong. Power decreased by 10. New power: " << power << endl;
    }
}

void Wolf::Print() const
{
    cout << "Species: " << name << endl;
    cout << "Power: " << power << endl;
}

Wolf::~Wolf()
{
    delete name;
}