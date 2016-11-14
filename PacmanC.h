#pragma once

#include <conio.h>
#include "levelC.h"

class Pacman
{
public:
    Pacman(int x, int y);
    ~Pacman();

    enum DIRECTION
    {
        STOP,
        UP,
        DOWN,
        LEFT,
        RIGHT
    };

    void Input();
    void Movement();
    void Update();
    //void Draw(_Field _board[][30]);
    inline int getX() {return this->_x; };
    inline int getY() {return this->_y; };

private:

    int _x, _y;
    int _xx, _yy;
    DIRECTION _dir;

};
