#pragma once

#include <iostream>
#include <stdlib.h>
#include <windows.h>
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

	int _score;
	
	Field _field;

	void _GameStart();
	void _GameLoop();
	void _GameEnd();
	void _Update();
};

