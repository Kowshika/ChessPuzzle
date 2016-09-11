#include <iostream>
#include <fstream>
#include "Output.h"
#include "GameController.h"
using namespace std;

int main()
{
    GameController game;
    bool val = game.Simulate();

    Output* out;
    out = Output::getInstance();
    cout<<out->jsonMsg;

    ofstream myfile;
    myfile.open ("C:\\Users\\Kowshika\\Downloads\\ChessPuzzle\\ChessPuzzle\\moves.json");
    myfile<<out->jsonMsg;

    return 0;
}
