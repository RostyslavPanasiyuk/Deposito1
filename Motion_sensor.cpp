#include "Motion_sensor.h"

Motion_sensor::Motion_sensor(string name)
{
    this->name = name;
}

string Motion_sensor::GetName()
{
    return this->name;
}

double Motion_sensor::GetValue()
{
    return this->value;
}

void Motion_sensor::GenerateValue()
{
    this->value = rand() % 1000;
    std::cout << this->value <<std:: endl;
}
