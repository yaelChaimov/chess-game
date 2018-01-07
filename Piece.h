//
// Created by ASUS on 06/01/2018.
//

#ifndef CHESS1_PIECE_H
#define CHESS1_PIECE_H

#include "Board.h"
#include <string>
#include <vector>

#define BLUE_BG "46"
#define GREEN_BG "42"


class Piece
{



protected:


public:
    std::string _blue_bg = "46m";
    std::string _green_bg ="42m";
    std::string _prefix = "\33[0;";
    std:: string _suffix = "\33[0m";
    int _row;
    int _col;
    std::string _type = "m ";
    std::string _color = "0";
    std::string _background = "";
    //  std::string _repr = "\33[0;42m" + _type + "\33[0m"; // = blue
    static int getCharAsDigit(char c);

    explicit Piece(std::string background, int row, int col);
//    std::vector getPosition();

    std::string get_background();
    int get_col();
    int get_row();
    void move_p(int row, int col);

    virtual void printPiece();

    std::string checkBackGroung();
};


#endif //CHESS1_PIECE_H
