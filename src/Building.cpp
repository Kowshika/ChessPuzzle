#include "stdlib.h"
#include "Building.h"
#include "Output.h"
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

Building::Building()
{

}
Building::Building(ObstacleLocation *locations)
{
    Output* out;
    for(int i=0;i<GameConfig::Rows;i++)
        for(int j=0;j<GameConfig::Columns;j++)
           BuildingMap[i][j]=GameConfig::NONE;


    out = Output::getInstance();
    out->jsonMsg.append("{");
    out->jsonMsg.append("\n\n\"obstacles\":[\n\n");

    for(int i=0;i<5;i++)
    {
        SetObstacleType(locations[i]);
        out->jsonMsg.append("\t{\"type\":");
        switch(locations[i].GetObstacle())
        {
           case GameConfig::ENEMY_COMMANDER:
                         out->jsonMsg.append("\"ENEMY_COMMANDER\",");
                         break;

           case GameConfig::HEROBOT:
                         out->jsonMsg.append("\"HEROBOT\",");
                         break;

           case GameConfig::MISSILE:
                         out->jsonMsg.append("\"MISSILE\",");
                         break;

           case GameConfig::RADAR:
                         out->jsonMsg.append("\"RADAR\",");
                         break;

           case GameConfig::TANK:
                         out->jsonMsg.append("\"TANK\",");
                         break;
        }
        out->jsonMsg.append("\"row\":\""+to_string(locations[i].GetFloor())+"\",");
        out->jsonMsg.append("\"column\":\""+to_string(locations[i].GetRoom())+"\"},\n\n");
    }
    out->jsonMsg.append("],\n\n");

}
void Building::SetObstacleType(ObstacleLocation location)
{
    BuildingMap[location.GetFloor()][location.GetRoom()]=location.GetObstacle();
}
GameConfig::ObstacleTypes Building::GetObstacleType(unsigned int floor,unsigned int room)
{
    return (this->BuildingMap[floor][room]);

}
 bool Building::IsValidMove(Move currentPosition,Move nextPosition)
 {

     if(currentPosition.GetRow() < GameConfig::Rows && nextPosition.GetRow() < GameConfig::Rows &&
        currentPosition.GetColumn() < GameConfig::Columns && nextPosition.GetColumn() < GameConfig::Columns)
     {
         int rowDiff = abs(currentPosition.GetRow()-nextPosition.GetRow());
         int colDiff = abs(currentPosition.GetColumn()-nextPosition.GetColumn());

         if( (rowDiff==1&&colDiff==2) || (rowDiff==2&&colDiff==1))
              return true;
     }
     return false;

 }

