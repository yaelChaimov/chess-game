

#ifndef EX2_CPP_GAME_H
#define EX2_CPP_GAME_H


#include <iostream>
#include <string>

class Game {
private:
    bool isStart = true;
public:
    std::string whitePlayer;
    std::string blackPlayer;
    bool getIsStart(){
        return isStart;
    }
    void runGame();
};



#endif //EX2_CPP_GAME_H
