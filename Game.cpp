#include <iostream>
#include "Board.h"

int main()
{
    Board *board;
    board->printBoard();
    board->moved(4,4,5,5);


    std::cout << std::endl;
    board->printBoard();

}