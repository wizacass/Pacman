#pragma once

#include <iostream>
#include <stdlib.h>
#include "LevelC.h"
#include "PacmanC.h"

class Game
{
public:
	Game();
	~Game();

	Level *level;
	Pacman *pacman;

private:
	bool _isWorking;

	void _GameStart();
	void _GameLoop();
	void _GameEnd();
	void _Update();
};
