#include "Output.h"
#include<string>
#include <stdlib.h>
using namespace std;

bool Output::instanceFlag = false;
Output* Output::single = NULL;
string Output:: jsonMsg;
Output* Output::getInstance()
{
    if(! instanceFlag)
    {
        single = new Output();
        instanceFlag = true;
        return single;
    }
    else
    {
        return single;
    }
}


