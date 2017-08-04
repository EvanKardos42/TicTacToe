#include <saveGame.h>

void saveGame:: save(){
    string toSave =formatData();
    fileS.open("save.txt");
    fileS<<toSave;

    fileS.close();
}


vector<string> saveGame:: load(){
    string stuff="";
    vector<string> data;
    string line;

    fileL.open("save.txt");
    while (getline(fileL,line) ){
        data.push_back(line);
    }
    fileL.close();
    return data;
}
