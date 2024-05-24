#include "../header/board.h"

Board::Board() 
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++) 
        {
            this->mBoard[row][col] = '-';
        }
    }
}
void Board::mark(unsigned int row, unsigned int col, char marker)
{
    if (row > 2 || col > 2) 
    {
        throw std::invalid_argument("Invalid row and/or column value");
    }
    if (toupper(marker) != 'O' && toupper(marker) != 'X')
    {
        throw std::invalid_argument("Invalid marker value");
    }
    if (getMarker(row, col) != '-')
    {
        throw std::invalid_argument("Previously marked point");
    }
    else
    {
        this->mBoard[row][col] = marker;
    }
}
char Board::getMarker(unsigned int row, unsigned int col) const
{
    if (row > 2 || col > 2) 
    {
        throw std::invalid_argument("Invalid row and/or column value");
    }
    return this->mBoard[row][col];
}