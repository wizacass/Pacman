#include <iostream>
#include "Pacman.h"

Pacman::Pacman(int x, int y) :
	_y(y),
	_x(x)
{
	this->_dir = STOP;
	this->_xx = 0;
	this->_yy = 0;

	std::cout << "Hello! Swagman\n";
}

Pacman::~Pacman()
{
	std::cout << "Goodbye! Swagman\n";
}

void Pacman::Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'w':
			this->_dir = UP;
			break;
		case 'a':
			this->_dir = LEFT;
			break;
		case 's':
			this->_dir = DOWN;
			break;
		case 'd':
			this->_dir = RIGHT;
			break;
			//debug
		case 'x':
			this->_dir = STOP;
			break;
		}
	}
}

void Pacman::Movement()
{
	switch (this->_dir)
	{
	case STOP:
		this->_xx = 0;
		this->_yy = 0;
		break;
	case UP:
		this->_xx = -1;
		this->_yy = 0;
		break;
	case DOWN:
		this->_xx = 1;
		this->_yy = 0;
		break;
	case RIGHT:
		this->_xx = 0;
		this->_yy = 1;
		break;
	case LEFT:
		this->_xx = 0;
		this->_yy = -1;
		break;
	}
}

void Pacman::Check()
{

}

void Pacman::Update()
{
	this->_x += this->_xx;
	this->_y += this->_yy;
}