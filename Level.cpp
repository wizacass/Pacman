#include "Level.h"

Level::Level(std::string name) :
_name(name)
{
	std::cout << "Hello!" << std::endl;

	this->_GetLevelInfo();
	Draw();
}

Level::~Level()
{
	std::cout << "Bye!" << std::endl;
}

void Level::Draw()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			std::cout << this->_board[i][j].content;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Level::_GetLevelInfo()
{
	std::ifstream src(this->_name + ".txt");

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			this->_board[i][j].x = i;
			this->_board[i][j].y = j;
			
			src >> this->_board[i][j].content;
		}
	}

	src.close();
}
