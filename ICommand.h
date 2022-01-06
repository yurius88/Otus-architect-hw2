#pragma once

// интерфейс команды
class ICommand
{
public:
	virtual void Execute() = 0;
};