#pragma once

// интерфейс вращения
class IRotable
{
public:
	virtual int getDirection() = 0;
	virtual void setDirection(int) = 0;
	virtual int getAngularVelocity() = 0;
	virtual int getMaxDirections() = 0;
};
