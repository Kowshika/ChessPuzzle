#include "ObstacleLocation.h"

ObstacleLocation::ObstacleLocation(int floor,int room,GameConfig::ObstacleTypes type)
{
    this->room = room;
    this->floor = floor;
    this->type = type;
}
GameConfig::ObstacleTypes ObstacleLocation::GetObstacle()
{
    return type;
}

unsigned int ObstacleLocation::GetRoom()
{
    return this->room;
}

unsigned int ObstacleLocation::GetFloor()
{
    return this->floor;
}
