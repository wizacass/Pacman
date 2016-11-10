#pragma once

#include <iostream>
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
	bool _isWorking = true;

	void _GameStart();
	void _GameLoop();
	void _GameEnd();


};