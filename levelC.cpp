#include "LevelC.h"

Level::Level(std::string name)
{
    this->_name = name + ".txt";

	std::cout << "Hello! Level" << std::endl;

	this->_GetLevelInfo();
	Draw();
}

Level::~Level()
{
	std::cout << "Bye! Level" << std::endl;
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

Field Level::GetBoard()
{
    return this->_board;
}

void Level::_GetLevelInfo()
{
	//std::ifstream src(this->_name);
    std::ifstream src("Level1.txt");

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


