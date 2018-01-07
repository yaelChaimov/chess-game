//
// Created by Shmulik on 05/01/2018.
//

#include "Rook.h"
#include "Game.h"

Rook::Rook()
{
    printOnGreen =  "\33[30;46m\u265C\33[0m";//green + pawn;
    printOnBlue = "\33[30;42m\u265C\33[0m";//blue + pawn;
}

bool Rook::isLegalMove(std::string move, Game* game)
{
    int xStart = Piece::getCharAsDigit(move[0]);
    int yStart = int(move[1]);
    int xMove = Piece::getCharAsDigit(move[2]);
    int yMove = int(move[3]);
    return (xStart == xMove || yStart == yMove);
}
