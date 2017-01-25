#include<fstream>
#include <iostream>

#ifndef SAVEGAME_H
#define SAVEGAME_H

using namespace std;

class SaveGame
{
    public:
        virtual void formatData()=0;
        void load();
        const ofstream gameFile;
    private:

};

#endif // SAVEGAME_H
