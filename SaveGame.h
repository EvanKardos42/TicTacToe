#include<fstream>
#include <iostream>

#ifndef SAVEGAME_H
#define SAVEGAME_H

using namespace std;

class SaveGame
{
    public:
        virtual std::string formatData();
        void load();
        void save();
        //const ofstream gameFile;
    private:

};

#endif // SAVEGAME_H
