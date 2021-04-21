#include "Smoke_sensor.h"

Smoke_sensor::Smoke_sensor(string name)
{
    this->name = name;
}

string Smoke_sensor::GetName()
{
    return this->name;
}

double Smoke_sensor::GetValue()
{
    return this->value;
}

void Smoke_sensor::GenerateValue()
{
    this->value = rand() % 1000;
   cout << this->value <<endl;
   notify();
}
