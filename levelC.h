#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "global.h"

class Level
{
public:
	Level(std::string name);
	~Level();

	void SetPac(int x, int y);
	void SetTile(struct GLOBALS::Field f);
	void Draw();

private:
	std::string _name;
	GLOBALS::Field _board[20][30];

	void _GetLevelInfo();
};
