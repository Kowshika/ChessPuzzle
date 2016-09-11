#ifndef __OBSTACLELOCATION_H__
    #define __OBSTACLELOCATION_H__
#include "GameConfig.h"

class ObstacleLocation {

    private:
        unsigned int room,floor;
        GameConfig::ObstacleTypes type;

    public:
        ObstacleLocation(int room,int floor,GameConfig::ObstacleTypes type);
        //Get the type of obstacle placed
        GameConfig::ObstacleTypes GetObstacle();
        unsigned int GetRoom();
        unsigned int GetFloor();
};
#endif // __OBSTACLELOCATION_H__
