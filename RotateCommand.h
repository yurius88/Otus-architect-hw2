#pragma once
#include "ICommand.h"
#include "IRotable.h"

class RotateCommand : public ICommand
{
public:
	RotateCommand(IRotable* rotable) : _rotable(rotable)
	{

	}
	void Execute()
	{
		_rotable->setDirection(
			(_rotable->getDirection() + _rotable->getAngularVelocity())
			% _rotable->getMaxDirections());
	}
private:
	IRotable* _rotable;
};