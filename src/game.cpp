#include "../header/game.h"

Game::Game()
{
    this->mInputValidator = new InputValidator();
    this->mOutputFormatter = new OutputFormatter();
    this->mGameManager = new GameManager();
}
Game::~Game()
{
    delete this->mGameManager;
}
void Game::start() 
{
    std::cout << "Game has begun!" << std::endl;
}
