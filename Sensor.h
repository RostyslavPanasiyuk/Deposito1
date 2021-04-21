#pragma once
#include <iostream>
#include<string>
#include <string.h>
using namespace std;
class Sensor
{
public:
	virtual void GenerateValue();
	virtual double GetValue();
	virtual string GetName();
};

