#include <iostream>
#include <stdlib.h>
#include <Board.h>
using namespace std;

void printInstructions();
void printWinner();

const char PLAYERX='X';
const char PLAYERO='O';

int turnCount=1;
char currentPlayer;

int main()
{
    bool endOfGame=false;
    char input;
    board brd;

    brd.load();
    do
    {
        cout<< "Welcome to Tic Tac Toe"<<endl;
        printInstructions();
        brd.printBrd();

        turnCount++;

        cout<< "choose a square:";
        cin>>input;
        if(input=='q' || input=='Q'){
            brd.save();
            break;
        }
        // minus 48 since converting char into ascii.
        // minus 1 since using an array.
        system("cls");
        brd.checkSquare(((int)input)-49,currentPlayer, turnCount);
        endOfGame=brd.checkBoard();


        if(endOfGame)
        {
            printWinner();
            cout<< "would you like to play again?[Y/N]";
            cin>> input;

            if(input=='Y' || input=='y' )
            {
                endOfGame=false;
                cout<<endOfGame;
                system("cls");
                brd.restBoard();
                turnCount=1;
            }
        }
    }
    while(!endOfGame);


    return 0;
}

/**
* prints the instructions of the game
* and tells who's turn it is.
*/

void printInstructions()
{


    cout<<"type the position number that you want to move to\n"<<endl;
    if(turnCount%2 == 1)
    {
        cout<<"player X's move\n\n";
        currentPlayer=PLAYERX;
    }
    else
    {
        cout<<"player O's move\n\n";
        currentPlayer=PLAYERO;
    }
}
/**
* prints the winner of the game.
*/
void printWinner()
{
    if(turnCount%2==0)
    {
        cout<< "player X has won\n";
    }
    else
    {
        cout<< "player O has won\n";
    }

}
