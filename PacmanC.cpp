#include <iostream>

#include "PacmanC.h"

Pacman::Pacman(int x, int y) :
    _y(y),
    _x(x)
{
    std::cout << "Hello! Swagman\n";
    pac = 'C';
}

Pacman::~Pacman()
{
    std::cout << "Goodbye! Swagman\n";
}
