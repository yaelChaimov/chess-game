//
// Created by ASUS on 06/01/2018.
//

#include <iostream>
#include <utility>
#include "Piece.h"
#include "string.h"



Piece::Piece(std::string background , int row, int col)
{
    _background = background;
    _row = row;
    _col = col;
}




void Piece::printPiece()
{
    std::string background = checkBackGroung();

    std::string print = "\33[" +_color + ";" + _background + _type + "\33[0m";
    std::cout << print;

}



int Piece::getCharAsDigit(char c)
{
    switch (c)
    {
        case 'A':
            return 0;
        case 'B':
            return 1;
        case 'C':
            return 2;
        case 'D':
            return 3;
        case 'E':
            return 4;
        case 'F':
            return 5;
        case 'G':
            return 6;
        case 'H':
            return 7;
        default:
            return -1;
    }
}


void Piece::move_p(int row, int col)
{
    _background = GREEN_BG;
    _row = row;
    _col = col;
    if((row + col) % 2 == 0)
    {
        _background = BLUE_BG;
    }


}

std::string Piece::get_background()
{
    return _background;
}

int Piece::get_col()
{
    return _col;
}

int Piece::get_row()
{
    return _row;
}

std::string Piece::checkBackGroung()
{
    if ((_row + _col) % 2 == 0)
    {
        return BLUE_BG;
    }
    else
    {
        return GREEN_BG;

    }
}



