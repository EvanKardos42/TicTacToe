#include <Board.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#ifndef SAVEGAME_H
#define SAVEGAME_H

using namespace std;
class saveGame
{

    public:
    virtual string formatData()=0;
      void save();
      vector<string> load();
    private:
        ofstream fileS;
        ifstream fileL;

};

#endif // SAVEGAME_H
