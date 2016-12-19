#include "Level.h"

Level::Level(std::string name)
{
    this->_maxScore = 0;
	this->_name = name + ".txt";

	std::cout << "Hello! Level" << std::endl;

	this->_GetLevelInfo();
}

Level::~Level()
{
	std::cout << "Bye! Level" << std::endl;
}

//SetPac and ClearTile could be merged
void Level::SetPac(int x, int y)
{
	this->_board[x][y].content = 'C';
}

void Level::CheckScore(int x, int y, int & score)
{
    if(this->_board[x][y].content == '+')
        score++;
}

void Level::ClearTile(int x, int y)
{
	//this->_board[x][y].content = ' ';
	if(this->_board[x - 1][y].content == 'C')
        this->_board[x - 1][y].content = ' ';
    if(this->_board[x + 1][y].content == 'C')
        this->_board[x + 1][y].content = ' ';
    if(this->_board[x][y - 1].content == 'C')
        this->_board[x][y - 1].content = ' ';
    if(this->_board[x][y + 1].content == 'C')
        this->_board[x][y + 1].content = ' ';
}

DIRECTION Level::Check(int x, int y, DIRECTION dir)
{
    switch (dir)
    {
    case UP:
        if(this->_board[x-1][y].content == '#')
            return STOP;
        else
            return UP;
        break;
    case DOWN:
        if(this->_board[x+1][y].content == '#')
            return STOP;
        else
            return DOWN;
        break;
    case RIGHT:
        if(this->_board[x][y+1].content == '#')
            return STOP;
        else
            return RIGHT;
        break;
    case LEFT:
        if(this->_board[x][y-1].content == '#')
            return STOP;
        else
            return LEFT;
        break;
    default:
        return STOP;
        break;
    }
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
	//std::ifstream src(this->_name);
	std::ifstream src("Level1.txt");
    int x, y;
    src >> x >> y;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			this->_board[i][j].x = i;
			this->_board[i][j].y = j;

			src >> this->_board[i][j].content;
			if (this->_board[i][j].content == '+')
                this->_maxScore++;
		}
	}

	src.close();
}



