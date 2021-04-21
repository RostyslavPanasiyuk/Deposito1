#pragma once
#include "Sensor.h"
#include<string>
#include<string.h>
class MagneticSensor :
    public Sensor
{
private:

	string name;
	double value;
public:

	MagneticSensor(string name);

	string GetName();

	virtual double GetValue()override;

	void GenerateValue()override;


};

