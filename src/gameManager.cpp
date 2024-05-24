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
const Board* GameManager::getBoard() const
{
    return this->mGameBoard;
}
const TurnManager* GameManager::getTurnManager() const
{
    return this->mTurnManager;
}      