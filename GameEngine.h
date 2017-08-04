#include <string>
#include <Board.h>
#include <SaveGame.h>
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

using namespace std;
class GameEngine: public board,public saveGame
{
    public:
        void checkSquare(int square,char player, int &turn);
        string formatData();
        int& getTurnCount();
        void restGame();
        void loadPassedGames();

    private:
        int turnCount=0;
};

#endif // GAMEENGINE_H
