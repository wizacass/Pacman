#pragma once

#include <iostream>
#include "Level.h"

class Game
{
public:
	Game();
	~Game();

	Level *level;

private:
	bool _isWorking = true;

	void _GameStart();
	void _GameLoop();
	void _GameEnd();


};