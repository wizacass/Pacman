#pragma once

#include <conio.h>
#include "globals.h"
#include "level.h"

class Pacman
{
public:
	Pacman(int x, int y);
	~Pacman();

	int pX;
	int pY;

	void Input();
	void Movement();
	void Update();

	inline int getX() { return this->_x; };
	inline int getY() { return this->_y; };

private:

	int _x, _y;
	int _xx, _yy;
	DIRECTION _dir;
};

