#pragma once

#include "levelC.h"

class Pacman
{
public:
    Pacman(int x, int y);
    ~Pacman();

    char pac;

    void Input();
    void Movement();
    void Draw(_Field _board[][30]);

private:
    enum _DIRECTION
    {
        STOP,
        UP,
        DOWN,
        LEFT,
        RIGHT
    };

    int _x, _y;


};
