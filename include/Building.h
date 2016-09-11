#ifndef __BUILDING_H__
    #define __BUILDING_H__
#include "GameConfig.h"
#include "ObstacleLocation.h"
#include "Move.h"

class Building {

    private:
         GameConfig::ObstacleTypes BuildingMap[GameConfig::Rows][GameConfig::Columns];
         void SetObstacleType(ObstacleLocation location);

    public:
         Building();
         //Constructor to Board consists of ObstacleLocation array
         Building(ObstacleLocation locations[]);
         //Get the obstacle type in the specified position
         GameConfig::ObstacleTypes GetObstacleType(unsigned int floor,unsigned int room);
         //returns true if move is valid (checks if move is in L shape)
         bool IsValidMove(Move currentPosition,Move nextPosition);

};
#endif // __BUILDING_H__
