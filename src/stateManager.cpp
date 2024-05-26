#include "../header/stateManager.h"

StateManager::StateManager() 
{
    this->mGameBoard = new Board();
    this->mTurnManager = new TurnManager();
    this->mRunning = true;
}
StateManager::~StateManager()
{
    delete this->mGameBoard;
    delete this->mTurnManager;
}
Board* StateManager::getBoard()
{
    return this->mGameBoard;
}
TurnManager* StateManager::getTurnManager()
{
    return this->mTurnManager;
}

void StateManager::updateRunningStatus(bool status)
{
    this->mRunning = status;
}

bool StateManager::isRunning() const
{
    return this->mRunning;
}