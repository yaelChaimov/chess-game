//
// Created by Shmulik on 05/01/2018.
//

#ifndef EX2_CPP_ROOK_H
#define EX2_CPP_ROOK_H

#include <iostream>
#include <vector>
#include <string>
#include "Piece.h"

class Rook : public Piece{
private:
    std::vector<int> position;
public:
    Rook();
    bool isLegalMove(std::string move, Game* game) override;

};
#endif //EX2_CPP_ROOK_H
