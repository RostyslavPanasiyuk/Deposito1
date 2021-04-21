#include "MagneticSensor.h"


MagneticSensor::MagneticSensor(string name)
{
    this->name = name;
}

string MagneticSensor::GetName()
{
    return this->name;
}

double MagneticSensor::GetValue()
{
    return this-> value;
}

void MagneticSensor::GenerateValue()
{
    value = rand() % 1000;
   std:: cout << value << std::endl;
}
