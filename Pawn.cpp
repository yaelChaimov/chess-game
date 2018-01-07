//
// Created by ASUS on 06/01/2018.
//

#include <iostream>
#include "Pawn.h"

#define WHITE "30"
#define BLACK "37"




void Pawn::printPiece()
{
    std::string background = checkBackGroung();

    std::string print = "\33[" +_color + ";" + _background  + _type + "\33[0m";
    std::cout << print;
}

Pawn::Pawn(std::string background, std::string color, int row,int col)
        : Piece(background, row, col)
{
    _type = "m\u265F";
    _color = color;
}


