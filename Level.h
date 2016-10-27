#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Level
{
public:
	Level(std::string name);
	~Level();

	void Draw();
private:
	struct _Field
	{
		int x, y;
		char content;
	};

	std::string _name;
	_Field _board[20][30];

	void _GetLevelInfo();
};

