#pragma once
#include "ICommand.h"
#include "IMoveable.h"

class MoveCommand : public ICommand
{
public:
	MoveCommand(IMoveable* moveable): _moveable(moveable)
	{

	}
	void Execute()
	{
		_moveable->setPosition(_moveable->getPosition() + _moveable->getVelocity());
	}
private:
	IMoveable* _moveable;
};
