#pragma once
#include "inputValidator.h"
#include "outputFormatter.h"
#include "gameManager.h"

class Game
{
    private:
        InputValidator*     mInputValidator;
        OutputFormatter*    mOutputFormatter;
        GameManager*        mGameManager;
    public:
        Game();
        ~Game();
        void start();
};