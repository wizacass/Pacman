#include <iostream>

#include "PacmanC.h"

Pacman::Pacman(int x, int y) :
    _y(y),
    _x(x)
{
    this->_dir = GLOBALS::STOP;
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
    if(_kbhit())
    {
        switch(_getch())
        {
        case 'w':
            this->_dir = GLOBALS::UP;
            break;
        case 'a':
            this->_dir = GLOBALS::LEFT;
            break;
        case 's':
            this->_dir = GLOBALS::DOWN;
            break;
        case 'd':
            this->_dir = GLOBALS::RIGHT;
            break;
        //debug
        case 'x':
            this->_dir = GLOBALS::STOP;
            break;
        }
    }
}

void Pacman::Movement()
{
    switch (this->_dir)
    {
    case GLOBALS::STOP:
        this->_xx = 0;
        this->_yy = 0;
        break;
    case GLOBALS::UP:
        this->_xx = -1;
        this->_yy = 0;
        break;
    case GLOBALS::DOWN:
        this->_xx = 1;
        this->_yy = 0;
        break;
    case GLOBALS::RIGHT:
        this->_xx = 0;
        this->_yy = 1;
        break;
    case GLOBALS::LEFT:
        this->_xx = 0;
        this->_yy = -1;
        break;
    }
}

void Pacman::Update()
{
    this->_x += this->_xx;
    this->_y += this->_yy;
}
