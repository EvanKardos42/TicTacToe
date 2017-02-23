#include <Board.h>
#include <SaveGame.h>
#ifndef GAMEENGINE_H
#define GAMEENGINE_H


class GameEngine: public board, public SaveGame
{
    public:
        void checkSquare(int square,char player, int &turn);
        std::string formatData();
        bool getEndGame();
        void makeMove(int index,char player);
        void restGame();
        int turnCount=0;
    private:
        bool endGame=false;
};

#endif // GAMEENGINE_H
