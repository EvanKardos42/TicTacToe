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

    // Converting an integer to a char . 0+48= zero in ascii.
    char c[2]={(char)(turnCount+48),'\n'};
    string sData= c;
    sData= sData+positions;

    return sData;
}

/**
* returns a reference of the turn count
*/
int& GameEngine::getTurnCount(){
    return turnCount;
}


/**
*rests the board and the turn count
* to play again
*/
void GameEngine ::  restGame(){

    restBoard();
    turnCount=0;
}

void GameEngine:: loadPassedGames(){
        vector<string> d= load();
        string cells= d.back();
        d.pop_back();
        string turns=d.back();
        cout<<turns<<endl;
        if(isdigit(turns[0])){
            turnCount=turns[0];
        }

    for(int i=0; i< numOfCells ; i++){
        if( isalpha( cells[i]) ){
            positions[i]=cells[i];
        }
    }

}

