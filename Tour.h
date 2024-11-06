#include<vector>
#include"Point.h"
using namespace std;


class Tour
{
    private:
    vector<Point> path;

    public:
    Tour();
    Tour(vector<Point> currentPath);
    vector<Point> getTour();
    double getTotalDistance();    
    double eucledianDistance(Point p1,Point p2);

};