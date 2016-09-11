#ifndef __GAMECONFIG_H__
      #define __GAMECONFIG_H__

class GameConfig{

    public :
         static const int Rows    = 10;
         static const int Columns = 10;
         //No of moves is restricted to 200
         static const int MovesLength = 200;
         enum ObstacleTypes {NONE,HEROBOT,RADAR,MISSILE,TANK,ENEMY_COMMANDER};

};
#endif // __GAMECONFIG_H__
