#include "../header/outputFormatter.h"

void OutputFormatter::outputTurnInfo(const TurnManager* tm) const
{
    std::cout << "Turn Count: " << tm->getTurnCount() << std::endl;
    std::cout << "Player: " << tm->getPlayer() << std::endl;          
}

void OutputFormatter::outputBoard(const Board* b) const
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++) 
        {
            std::cout << b->getMarker(row, col);
        }
        std::cout << std::endl;
    }
}

void OutputFormatter::clear() const
{
    std::system("CLS");
}

void OutputFormatter::outputGame(const GameManager* gm) const 
{
    const Board* board = gm->getBoard();
    const TurnManager* turnManager = gm->getTurnManager();
    
    this->clear();
    
    std::cout << "_______" << std::endl;
    this->outputTurnInfo(turnManager);
    this->outputBoard(board);
    std::cout << "_______" << std::endl;
}
