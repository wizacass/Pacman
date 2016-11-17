#pragma once

#include <iostream>
#include <stdlib.h>
#include "Level.h"
#include "Pacman.h"
#include "Globals.h"

class Game
{
public:
	Game();
	~Game();

	Level *level;
	Pacman *pacman;

private:
	bool _isWorking;

	int _Score;

	void _GameStart();
	void _GameLoop();
	void _GameEnd();
	void _Update();
};

