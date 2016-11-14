#include "GameC.h"

Game::Game()
{
	this->_GameStart();
	this->_GameLoop();
	this->_GameEnd();
}

Game::~Game()
{
	std::cout << "Bye! Cyka" << std::endl;

	delete level;
}

void Game::_GameStart()
{
	std::cout << "Pacman Game" << std:: endl;

	level = new Level("level1");
	pacman = new Pacman(10, 10);
}

void Game::_GameLoop()
{
	while (this->_isWorking)
	{
        system("cls");
        level->SetPac(pacman->getX(), pacman->getY());
        pacman->Input();
        pacman->Movement();
        pacman->Update();
        level->Draw();
        system("timeout 1");
	}
}

void Game::_GameEnd()
{
	std::cout << "Game Over!" << std::endl;
}
