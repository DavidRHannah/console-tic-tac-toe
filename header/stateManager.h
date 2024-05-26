#pragma once
#include "board.h"
#include "turnManager.h"

class StateManager
{
    private:
        Board*          mGameBoard;
        TurnManager*    mTurnManager;
        bool            mRunning;
    public:
        StateManager();
        ~StateManager();
        Board* getBoard();
        TurnManager* getTurnManager();
        void updateRunningStatus(bool status);
        bool isRunning() const;
};

