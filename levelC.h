#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Level
{
public:
	Level(std::string name);
	~Level();

	struct Field
	{
		int x, y;
		char content;
	};

	void SetPac(int x, int y);
	void Draw();

private:

	std::string _name;
	Field _board[20][30];

	void _GetLevelInfo();
};

