//
// Created by ASUS on 06/01/2018.
//

#include <iostream>
#include "Board.h"
#include "Pawn.h"
#include "Piece.h"





#define WHITE "30"
#define BLACK "37"


#define BLUE_BG "46"
#define GREEN_BG "42"


Board::Board()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                _chessBoard[i][j] = new Piece(BLUE_BG, i , j);
                if(i == 6){
                    Pawn * pawn = new Pawn(BLUE_BG, WHITE, i, j);
//                    whitePieces[numWhitePieces++] = pawn;
                    _chessBoard[i][j] = pawn;
                }
                if(i == 1){
                    Pawn * pawn = new Pawn(BLUE_BG, BLACK, i, j);
//                    blackPieces[numBlackPieces++] = pawn;
                    _chessBoard[i][j] = pawn;
                }
            }
            else
            {
                _chessBoard[i][j] = new Piece(GREEN_BG, i ,j);
                if(i == 6){
                    Pawn * pawn = new Pawn(GREEN_BG, WHITE, i, j);
//                    whitePieces[numWhitePieces++] = pawn;
                    _chessBoard[i][j] = pawn;
                }
                if(i == 1){
                    Pawn * pawn = new Pawn(GREEN_BG, BLACK, i, j);
//                    blackPieces[numBlackPieces++] = pawn;
                    _chessBoard[i][j] = pawn;
                }
            }

        }
    }


}

void Board::initializeBoard()
{

}


void Board::printBoard()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            _chessBoard[i][j]->printPiece();
        }
        std::cout << std::endl;
    }
}

void Board::moved(int row, int col, int toRow, int toCol)
{
    //initialize
    std::string background = GREEN_BG;
    Piece * tmp_piece = _chessBoard[toRow][toCol];

    // update board:
    _chessBoard[toRow][toCol] =_chessBoard[row][col];

    if ((row +col) % 2 == 0)
    {
        _chessBoard[row][col] = new Piece(BLUE_BG, row, col);
    }

    // update piece:


    _chessBoard[toRow][toCol]->move_p(row, col);
}

