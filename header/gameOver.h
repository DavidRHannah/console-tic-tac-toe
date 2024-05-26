#pragma once
#include <string>
#include "../header/board.h"
#include "../header/turnManager.h"

class GameOver
{
    private:
        bool mRunning;
        char mWinner;

        bool checkWin(Board* board, char player) const;
        bool checkDraw(Board* board) const;
    public:
        GameOver();
        bool isRunning() const;
        char getWinner() const;
        void updateGameState(Board* board, TurnManager* turnManager);
};