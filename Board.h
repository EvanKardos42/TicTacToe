#include <iostream>
#include <cstdlib>
#include <SaveGame.h>

#ifndef BOARD_H
#define BOARD_H

using namespace std;

class board: public SaveGame{
public:
    board();
    bool checkBoard();
    void checkSquare(int square,char player, int &turn);
    void printBrd();
    void makeMove(int index,char player);
    void restBoard();

private:
    char positions[9]= {'1','2','3','4','5','6','7','8','9'};
    const int numOfCells=9;
};

#endif // BOARD_H
