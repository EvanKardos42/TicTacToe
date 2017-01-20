#include "board.h"


board::board(){


}
/**
*checks to the board to see if there
*is a winner
*/
bool board:: checkBoard()
{
    // rows
    if(positions[0]==positions[1]  && positions[1]==positions[2]  )
    {
        return true;
    }
    if(positions[3]==positions[4] && positions[4]==positions[5] )
    {
        return true;
    }
    if(positions[6]==positions[7] && positions[7]== positions[8] )
    {
        return true;
    }
    // columns
    if(positions[0]==positions[3] && positions[3]== positions[6])
    {
        return true;
    }
    if( positions[1]== positions[4] && positions[4]==positions[7]  )
    {
        return true;
    }
    if(positions[6]== positions[7] && positions[7]== positions[8])
    {
        return true;
    }

    // diagonals
    if(positions[4]==positions[0]&& positions[0] == positions[8] )
    {
        return true;
    }
    if(positions[4]== positions[2] && positions[2]==positions[6])
    {
        return true;
    }

    return false;
}

/**
* check to see if the moved made is legal.
* if the move is illegal then one will
* be subtracted from the turn Count variable
*/
void board:: checkSquare(int square, char player, int &turn)
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

/**
* prints the current board with the
* players made moves
*/
void board:: printBrd()
{

    cout<<" "<<positions[0]<<"|"<< " "<<positions[1]<<"|"<< " "<<positions[2]<<endl;
    cout<<"--"<<" "<< "--"<<" "<< "--"<<endl;
    cout<<" "<<positions[3]<<"|"<< " "<<positions[4]<<"|"<< " "<<positions[5]<<endl;
    cout<<"--"<<" "<< "--"<<" "<< "--"<<endl;
    cout<<" "<<positions[6]<<"|"<< " "<<positions[7]<<"|"<< " "<<positions[8]<<endl;
}
/**
*assigns the given index in the array.
* the player symbol
*/
void board:: makeMove(int index, char player)
{
    positions[index]= player;
}

/**
*resets the board.
* since the array is a char array and the loop
* uses integer. you must convert the integer into a
* char by adding 48 to the value plus 1 to display properly.
*/

void board:: restBoard()
{
    for(int i=0; i<numOfCells; i++)
    {
        positions[i]= (char)(i+49);
    }
}

