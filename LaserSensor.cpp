#include "LaserSensor.h"



float LaserSensor::getRange(int index)
{
	return ranges[index];
}

void LaserSensor::setRange(float range[])
{
	for (int i = 0; i < 16; i++)
	{
		ranges[i] = range[i];
	}
}

void LaserSensor::updateSensor(float range[])
{
	for (int i = 0; i < 16; i++)
	{
		ranges[i] = range[i];
	}
}

LaserSensor::LaserSensor(float _min,float _max,string _type )
{
	min = _min;
	max = _max;
}

LaserSensor::~LaserSensor()
{

}

float LaserSensor::getMax()
{
	return max;
}

float LaserSensor::getMin()
{
	return min;
}

float LaserSensor::operator[](int i)
{
	return ranges[i];
}