#include <Board.h>
#ifndef GAMEENGINE_H
#define GAMEENGINE_H


class GameEngine: public board
{
    public:
         void checkSquare(int square,char player, int &turn);
         void makeMove(int index,char player);
         void getEndgame();
    private:
        bool endGame=false;
};

#endif // GAMEENGINE_H
