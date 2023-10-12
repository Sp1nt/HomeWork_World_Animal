#include "Herbivore.h"



Herbivore::~Herbivore()
{
    delete name;
}

double Herbivore::GetWeight() const
{
    return weight;
}

char* Herbivore::GetName() const
{
    return name;
}

bool Herbivore::GetIsLife() const
{
    return isLife;
}

void Herbivore::SetIsLife(bool il)
{
    isLife = il;
}
