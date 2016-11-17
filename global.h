#pragma once

namespace GLOBALS
{
    struct Field
	{
		int x, y;
		char content;
	};

	enum DIRECTION
    {
        STOP,
        UP,
        DOWN,
        LEFT,
        RIGHT
    };
}
