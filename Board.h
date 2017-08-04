#include <iostream>
#ifndef BOARD_H
#define BOARD_H

using namespace std;

class board{
public:
    bool checkBoard();
    void makeMove(int index,char player);
    void printBrd();
    void restBoard();

protected:
    char positions[9]= {'1','2','3','4','5','6','7','8','9'};
    const int numOfCells=9;
};

#endif // BOARD_H
