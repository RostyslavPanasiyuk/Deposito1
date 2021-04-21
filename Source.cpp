#include <iostream>
#include<string>
#include<string.h>
#include "Sensor.h"
#include"MagneticSensor.h"
#include "Motion_sensor.h"
#include "Smoke_sensor.h"
#include "Electronic_security_system.h"
using namespace std;
int main()
{
	Electronic_security_system* ESS = new Electronic_security_system();

	MagneticSensor* s1 = new MagneticSensor("MagneticSensor entrace_door");
	MagneticSensor* s2 = new MagneticSensor("MagneticSensor window_bathroom");
	MagneticSensor* s3 = new MagneticSensor("MagneticSensor window_kitchen");
	MagneticSensor* s4 = new MagneticSensor("MagneticSensor window_bedroom1");
	MagneticSensor* s5 = new MagneticSensor("MagneticSensor window_bedroom2");
	MagneticSensor* s6 = new MagneticSensor("MagneticSensor window1_bedroom3");
	MagneticSensor* s7 = new MagneticSensor("MagneticSensor window2_bedroom3");
	MagneticSensor* s8 = new MagneticSensor("MagneticSensor window1_livingroom");
	MagneticSensor* s9 = new MagneticSensor("MagneticSensor window2_livingroom");

	s1->GenerateValue();
	s1->GetName();
	s1->GetValue();

	Motion_sensor* Ms1 = new Motion_sensor("Motion_sensor holl");
	Motion_sensor* Ms2 = new Motion_sensor("Motion_sensor bathroom");
	Motion_sensor* Ms3 = new Motion_sensor("Motion_sensor kitchen");
	Motion_sensor* Ms4 = new Motion_sensor("Motion_sensor bedroom1");
	Motion_sensor* Ms5 = new Motion_sensor("Motion_sensor bedroom2");
	Motion_sensor* Ms6 = new Motion_sensor("Motion_sensor bedroom3");
	Motion_sensor* Ms7 = new Motion_sensor("Motion_sensor livingroom");

	Ms1->GenerateValue();
	Ms1->GetName();
	Ms1->GetValue();

	Smoke_sensor* SS1 = new Smoke_sensor("Smoke_sensor holl");
	Smoke_sensor* SS2 = new Smoke_sensor("Smoke_sensor bathroom");
	Smoke_sensor* SS3 = new Smoke_sensor("Smoke_sensor kitchen");
	Smoke_sensor* SS4 = new Smoke_sensor("Smoke_sensor bedroom1");
	Smoke_sensor* SS5 = new Smoke_sensor("Smoke_sensor bedroom2");
	Smoke_sensor* SS6 = new Smoke_sensor("Smoke_sensor bedroom3");
	Smoke_sensor* SS7 = new Smoke_sensor("Smoke_sensor livingroom");

	SS1->GenerateValue();
	SS1->GetName();
	SS1->GetValue();

	return 0;
}