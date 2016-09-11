#ifndef __OUTPUT_H__
#define __OUTPUT_H__
#include<string>
#include <stdlib.h>
using namespace std;
class  Output
{
private:
    static bool instanceFlag;
    static Output *single;
    Output()
    {   }
public:
    static Output* getInstance();
    static string  jsonMsg ;

    ~Output()
    {
        instanceFlag = false;
    }
};
#endif // __OUTPUT_H__

