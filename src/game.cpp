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
    mGameManager->getBoard()->mark(1,1,'O');
    mGameManager->getTurnManager()->incrementTurn();
    mGameManager->getBoard()->mark(1,2,'X');
    mGameManager->getTurnManager()->incrementTurn();
    mOutputFormatter->outputGame(this->mGameManager);
}
