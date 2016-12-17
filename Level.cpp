#include "Level.h"

Level::Level(std::string name)
{
	this->_name = name + ".txt";

	std::cout << "Hello! Level" << std::endl;

	this->_GetLevelInfo();
}

Level::~Level()
{
	std::cout << "Bye! Level" << std::endl;
}

//SetPac and ClearTile could be merged
void Level::SetPac(int x, int y, int & score)
{
	if(this->_board[x][y].content == '+')
		score++;

	if (this->_board[x - 1][y].content == 'C')
		this->_board[x - 1][y].content = ' ';
	if (this->_board[x + 1][y].content == 'C')
		this->_board[x + 1][y].content = ' ';
	if (this->_board[x][y - 1].content == 'C')
		this->_board[x][y - 1].content = ' ';
	if (this->_board[x][y + 1].content == 'C')
		this->_board[x][y + 1].content = ' ';

	this->_board[x][y].content = 'C';
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

char Level::GetContent(int x, int y)
{
	return this->_board[x][y].content;
}

void Level::_GetLevelInfo()
{
	std::ifstream src(this->_name);
	//std::ifstream src("Level1.txt");

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