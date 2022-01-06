#pragma once
#include "IRotable.h"

class MockRotableObject : public IRotable
{
public:
	MockRotableObject(int direction, int angularVelocity, int maxDirections) :
		_direction(direction), _angularVelocity(angularVelocity), _maxDirections(maxDirections)
	{

	}
	int getDirection()
	{
		return _direction;
	}
	void setDirection(int direction)
	{
		_direction = direction;
	}
	int getAngularVelocity()
	{
		return _angularVelocity;
	}
	int getMaxDirections()
	{
		return _maxDirections;
	}
private:
	int _direction, _angularVelocity, _maxDirections;
};
