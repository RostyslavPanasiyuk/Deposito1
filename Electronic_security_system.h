#pragma once
#include<iostream>
#include <string>
#include<string.h>
using namespace std;

class Electronic_security_system
{

public:
	class Sensor;

	Electronic_security_system (string name,double value);
	void alarm();
	void notify();
};

