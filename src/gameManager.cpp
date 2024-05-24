#include "../header/gameManager.h"

GameManager::GameManager() 
{
    this->mGameBoard = new Board();
    this->mTurnManager = new TurnManager();
}
GameManager::~GameManager()
{
    delete this->mGameBoard;
    delete this->mTurnManager;
}
Board* GameManager::getBoard()
{
    return this->mGameBoard;
}
TurnManager* GameManager::getTurnManager()
{
    return this->mTurnManager;
}      