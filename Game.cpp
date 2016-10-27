#include "Game.h"

Game::Game()
{
	this->_GameStart();
	this->_GameLoop();
	this->_GameEnd();
}

Game::~Game()
{
	std::cout << "Bye!" << std::endl;

	delete level;
}

void Game::_GameStart()
{
	std::cout << "Pacman Game" << std:: endl;

	level = new Level("level1");
}

void Game::_GameLoop()
{
	while (this->_isWorking)
	{
		this->_isWorking = false;
	}
}

void Game::_GameEnd()
{
	std::cout << "Game Over!" << std::endl;
}