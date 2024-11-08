#include<vector>
#include<cmath>
#include"Tour.h"
using namespace std;

Tour::Tour()
{
    path.reserve(131);
}

Tour::Tour(vector<Point> currentPath)
{
    path = currentPath;
}
vector<Point> Tour::getTour()
{
    return path;
}
double Tour::getTotalDistance()
{
    double distance;

    for(int i=0;i<path.size()-1;i++)
    {
        distance+=eucledianDistance(path[i],path[i+1]);
    }
    return distance;
}

Point Tour::getPoint(int index)
{
    return path[index];
}

void Tour::setPoint(int index,Point p)
{
    path[index]=p;
}

double Tour::eucledianDistance(Point p1,Point p2)
{
    double distance = sqrt(pow(p1.getX() - p2.getX(),2) + pow(p1.getY() - p2.getY(),2));
    return distance;
}