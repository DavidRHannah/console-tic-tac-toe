#include "../header/game.h"

Game::Game()
{
    this->mInputValidator = new InputValidator();
    this->mOutputFormatter = new OutputFormatter();
    this->mStateManager = new StateManager();
}
Game::~Game()
{
    delete this->mStateManager;
    delete this->mOutputFormatter;
    delete this->mStateManager;
}
void Game::start() 
{
    std::cout << "Game has begun!" << std::endl;
    while (mStateManager->isRunning())
    {
        // Output game board
        mOutputFormatter->outputGame(this->mStateManager);

        // Ask for input
        int x = 0, 
            y = 0;
        std::cout << "Make a move (row, col): ";
        std::cin >> x >> y;
        bool validCoordinates = false;
        if (!mStateManager->getBoard()->isMarked(x,y))
        {
            validCoordinates = true;
        }
        while (!validCoordinates) {
            std::cout << "Enter valid row and column (i.e.\"1 1\"): ";
            std::cin >> x >> y;
            if (!mStateManager->getBoard()->isMarked(x,y))
            {
                validCoordinates = true;
            }
            std::cout << std::endl;
        }

        // Validate input

        // Update board
        char currentPlayerCharacter = mStateManager->getTurnManager()->getPlayer();
        mStateManager->getBoard()->mark(x, y, currentPlayerCharacter);

        // Update turn manager
        mStateManager->getTurnManager()->incrementTurn();

        // Check for win or draw

    }   
}
