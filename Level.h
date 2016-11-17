#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "globals.h"

class Level
{
public:
	Level(std::string name);
	~Level();

	void SetPac(int x, int y);
	void SetTile(int x, int y);
	void Draw();

private:
	std::string _name;
	Field _board[20][30];

	void _GetLevelInfo();
};


