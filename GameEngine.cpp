#include "GameEngine.h"

/**
* check to see if the moved made is legal.
* if the move is illegal then one will
* be subtracted from the turn Count variable
*/
void GameEngine:: checkSquare(int square, char player, int &turn)
{
    if(positions[square]!='O' && positions[square]!='X' )
    {
        makeMove(square,player);
    }
    else
    {
        cout<< "***please choose a square that has not been taken****\n"<<endl;
        turn--;
    }
}
string GameEngine:: formatData(){


}

/**
* returns the value of endgame variable
*/
bool GameEngine:: getEndGame(){
    return endGame;
}

/**
*assigns the given index in the array.
* the player symbol
*/
void GameEngine:: makeMove(int index, char player)
{
    positions[index]= player;
    printBrd();
    endGame= checkBoard();
}

void GameEngine ::  restGame(){

    restBoard();
    turnCount=0;
}

