#include "Game.h"

Game::Game()
{
	this->_isWorking = true;

	this->_score = 0;

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

	this->_maxScore = level->getScore();
}

void Game::_GameLoop()
{
	while (this->_isWorking)
	{
		system("cls");
		std::cout << "Score: " << this->_score << "\t Max: " << this->_maxScore << std::endl;

		/*this->_field.x = pacman->getX();
		this->_field.y = pacman->getY();
		this->_field.content = level->GetContent(this->_field.x, this->_field.y);*/

		//level->ClearTile(pacman->pX, pacman->pY);
		//level->ClearTile(pacman->getX(), pacman->getY());
		pacman->Input();

		pacman->setDir(level->Check(pacman->getX(), pacman->getY(), pacman->getDir()));

		pacman->Movement();
		level->CheckScore(pacman->getX(), pacman->getY(), this->_score);
		level->ClearTile(pacman->getX(), pacman->getY());
		level->SetPac(pacman->getX(), pacman->getY());

		this->_Update();
		level->Draw();

		//system("timeout 1");
		Sleep(300);

        if(this->_score == this->_maxScore)
            break;
	}
}

void Game::_GameEnd()
{
    system("cls");
	std::cout << "Game Over!" << std::endl;
}

void Game::_Update()
{
	pacman->Update();
}

