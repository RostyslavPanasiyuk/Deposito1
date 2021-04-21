#pragma once
#include "Sensor.h"
class Smoke_sensor :
    public Sensor
{
private:
	string name;
	int value;
public:
	Smoke_sensor(string name);

	virtual string GetName()override;

	virtual double GetValue()override;

	virtual void GenerateValue()override;

};

