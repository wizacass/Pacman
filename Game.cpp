#include "Game.h"

Game::Game()
{
	this->_isWorking = true;

	this->_Score = 0;

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
	std::cout << "Pacman Game" << std::endl;

	level = new Level("level1");
	pacman = new Pacman(10, 10);
}

void Game::_GameLoop()
{
	while (this->_isWorking)
	{
		system("cls");
		std::cout << "\t Score: " << this->_Score << std::endl;
		
		this->_field.x = pacman->getX();
		this->_field.y = pacman->getY();
		this->_field.content = level->GetContent(this->_field.x, this->_field.y);

		//level->ClearTile(pacman->pX, pacman->pY);
		//level->ClearTile(pacman->getX(), pacman->getY());
		pacman->Input();
		pacman->Movement();
		level->ClearTile(pacman->pX, pacman->pY);
		level->SetPac(pacman->getX(), pacman->getY());

		this->_Update();
		level->Draw();

		//system("timeout 1");
		Sleep(1000);
	}
}

void Game::_GameEnd()
{
	std::cout << "Game Over!" << std::endl;
}

void Game::_Update()
{
	pacman->Update();
}

