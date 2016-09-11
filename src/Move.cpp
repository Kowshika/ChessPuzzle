#include "Move.h"

Move::Move()
{

}

Move::Move(unsigned int floor,unsigned int room)
{
    this->room = room;
    this->floor = floor;
}

unsigned int Move::GetColumn()
{
    return this->room;
}

unsigned int Move::GetRow()
{
    return this->floor;
}

void  Move::SetRow(unsigned int floor)
{
    this->floor = floor;
}

void Move::SetColumn(unsigned int room)
{
    this->room = room;
}
