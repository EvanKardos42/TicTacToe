#include<fstream>

#ifndef SAVEGAME_H
#define SAVEGAME_H


class SaveGame
{
    public:
        SaveGame();
        void save();
        void load();

    private:
    std::ofstream gameFile("savedGame.txt");
};

#endif // SAVEGAME_H
