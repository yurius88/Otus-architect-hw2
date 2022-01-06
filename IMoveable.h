#pragma once
#include "HW2_Global.h"

// интерфейс прямолинейного движения
class IMoveable
{
public:
	virtual Vector getPosition() = 0;
	virtual void setPosition(const Vector&) = 0;
	virtual Vector getVelocity() = 0;
};