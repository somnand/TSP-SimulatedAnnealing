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
