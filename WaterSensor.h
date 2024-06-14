#pragma once
#include "Sensor.h"
class WaterSensor : public Sensor
{
public:
	int currentLevel;
	int desiredLevel;
};

