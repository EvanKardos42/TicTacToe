#include <iostream>
#include <stdlib.h>
#include <GameEngine.h>
using namespace std;

void printInstructions();
void printWinner();

GameEngine playGame;
int& turn=playGame.turnCount;
char player;

int main()
{
    char input;
    //brd.load();
    do
    {
        cout<< "Welcome to Tic Tac Toe"<<endl;
        printInstructions();
        playGame.printBrd();

        cout<< "choose a square:";
        cin>>input;
        if(input=='q' || input=='Q')
        {
            break;
        }
        // minus 48 since converting char into ascii.
        // minus 1 since using an array.
        system("cls");
        playGame.checkSquare(((int)input)-49,player,turn);

        if(playGame.getEndGame())
        {
            printWinner();
            cout<< "would you like to play again?[Y/N]";
            cin>> input;

            if(input=='Y' || input=='y' )
            {
                system("cls");
                playGame.restGame();
            }
        }
        turn++;
    }
    while(!playGame.getEndGame());

    return 0;
}

/**
* prints the instructions of the game
* and tells who's turn it is.
*/
void printInstructions()
{
    cout<<"type the position number that you want to move to\n"<<endl;
    cout<<"type \'q\' to quit \n"<<endl;
    if(turn %2 == 0)
    {
        cout<<"player X's move\n\n";
        player='X';
    }
    else
    {
        cout<<"player O's move\n\n";
        player='O';
    }
};
/**
* prints the winner of the game.
*/
void printWinner()
{
    if(turn%2==0)
    {
        cout<< "player X has won\n";
    }
    else
    {
        cout<< "player O has won\n";
    }

}
