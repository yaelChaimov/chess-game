//
// Created by ASUS on 06/01/2018.
//

#ifndef CHESS1_BOARD_H
#define CHESS1_BOARD_H
#include "Piece.cpp"


class Board
{
public:
    Piece *_chessBoard[8][8];
    int numWhitePieces = 0;
    int numBlackPieces = 0;
//    Piece * whitePieces[16];
//    Piece * blackPieces[16];

    void initializeBoard();
    Board();
    void printBoard();
    void moved(int row, int col, int toRow, int toCol);
};


#endif //CHESS1_BOARD_H
