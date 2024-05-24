#pragma once
#include "board.h"
#include "turnManager.h"

class GameManager
{
    private:
        Board*          mGameBoard;
        TurnManager*    mTurnManager;
    public:
        GameManager();
        ~GameManager();
        Board* getBoard();
        TurnManager* getTurnManager();
};

