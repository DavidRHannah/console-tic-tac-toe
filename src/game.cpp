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
    delete this->mInputValidator;
}
void Game::start() 
{
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
        while (!validCoordinates) 
        {
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
        
        
        
        // Check for win or draw
        mStateManager->getGameOver()->updateGameState(mStateManager->getBoard(), mStateManager->getTurnManager());

        if (!mStateManager->getGameOver()->isRunning())
        {
            mOutputFormatter->outputGame(this->mStateManager);
            if (mStateManager->getGameOver()->getWinner() != ' ')
            {
                std::cout << "Player " << mStateManager->getGameOver()->getWinner() << " wins!" << std::endl;
            }
            else
            {
                std::cout << "It's a draw!" << std::endl;
            }
        }

        // Update turn manager
        mStateManager->getTurnManager()->incrementTurn();
    }   
}
