#pragma once

#include <iostream>
#include <stdlib.h>
#include "Level.h"
#include "Pacman.h"

class Game
{
public:
	Game();
	~Game();

	Level *level;
	Pacman *pacman;

private:
	bool _isWorking;

	int _score;

	void _GameStart();
	void _GameLoop();
	void _GameEnd();
	void _Update();
};

