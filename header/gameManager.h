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
        const Board* getBoard() const;
        const TurnManager* getTurnManager() const;
};

