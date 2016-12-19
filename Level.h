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
	void CheckScore(int x, int y, int & score);
	void ClearTile(int x, int y);
	void Draw();

	DIRECTION Check(int x, int y, DIRECTION dir);

	char GetContent(int x, int y);

	inline int getScore() { return this->_maxScore; };

private:
    int _maxScore;
	std::string _name;
	Field _board[20][30];

	void _GetLevelInfo();
};


