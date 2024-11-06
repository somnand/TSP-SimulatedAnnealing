#include<string>
#include"Point.h"
using namespace std;

Point::Point(int x,int y)
{
    this->x=x;
    this->y=y;    
}

string Point::toString()
{
    return "("+to_string(x)+" "+to_string(y)+")";
}

void Point::setX(int x){this->x=x;}
void Point::setY(int y){this->y=y;}
int Point::getX(){ return this->x; }
int Point::getY(){ return this->y; }
