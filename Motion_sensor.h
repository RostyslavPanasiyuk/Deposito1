#pragma once
#include "Sensor.h"
class Motion_sensor :
    public Sensor
{
private:
	string name;
	int value;
public:
	Motion_sensor(string name);

	virtual string GetName()override;

	virtual double GetValue()override;

	virtual void GenerateValue()override;

};

