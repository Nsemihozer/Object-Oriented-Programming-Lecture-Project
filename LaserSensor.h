#pragma once
#include "RangeSensor.h"
class LaserSensor :public RangeSensor
{
private:
	float min;
	float max;
	float ranges[16];
public:
	LaserSensor(float _min, float _max, string _type);
	~LaserSensor();
	float getRange(int index);
	void setRange(float range[]);
	void updateSensor(float range[]);
	float getMax();
	float getMin();
	float operator[](int i);





};

