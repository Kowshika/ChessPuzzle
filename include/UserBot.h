#ifndef __USERBOT_H__
   #define __USERBOT_H__
#include <list>
#include "Building.h"
#include "Move.h"
using namespace std;

class UserBot
{
public:
    list<Move> MakeMoves(Building BuildingPlan);
};
#endif // __USERBOT_H__
