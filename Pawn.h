//
// Created by ASUS on 06/01/2018.
//

#ifndef CHESS1_PAWN_H
#define CHESS1_PAWN_H

#include "Piece.h"
#include "Board.h"

#define GREEN_BG_WHITE_PAWN "\33[30;42m\u265F\33[0m"   //green + pawn;
#define GREEN_BG_BLACK_PAWN "\33[37;42m\u265F\33[0m"   //green + pawn;
#define BLUE_BG_WHITE_PAWN "\33[30;46m\u265F\33[0m"   //green + pawn;
#define BLUE_BG_BLACK_PAWN "\33[37;46m\u265F\33[0m"   //green + pawn;

class Pawn : public Piece
{
public:
    Pawn(std::string background, std::string color, int row, int col);

//    void move(int row, int col, Board *board) override ;
    void printPiece() override;

};


#endif //CHESS1_PAWN_H
