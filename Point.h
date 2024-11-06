#include<string>
using namespace std;
/**
 * To store the coordinates and the eucledian distance between them
 */
#pragma once
class Point
{
    private:
    int x;
    int y;    

    public:
    Point(int x,int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    string toString();    
};