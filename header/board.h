#pragma once
#include <cassert>
#include <stdexcept>
#include <stdlib.h>

class Board 
{
    private:
        char mBoard[3][3];
    public:
        Board();
        void mark(unsigned int row, unsigned int col, char marker);
        char getMarker(unsigned int row, unsigned int col) const;
};
