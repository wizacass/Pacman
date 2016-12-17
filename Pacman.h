#pragma once

#include <conio.h>
#include "globals.h"
#include "level.h"

class Pacman
{
public:
	Pacman(int x, int y);
	~Pacman();

	void Input();
	void Movement();
	void Check();
	void Update();

	inline int getX() { return this->_x; };
	inline int getY() { return this->_y; };

private:

	int _x, _y;
	int _xx, _yy;
	DIRECTION _dir;
};