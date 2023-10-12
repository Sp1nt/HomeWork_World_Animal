#include "Carnivore.h"



Carnivore::Carnivore()
{
    name = nullptr;
    power = 0;
}

Carnivore::~Carnivore()
{
    delete name;
}
