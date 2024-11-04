#include<string>
using namespace std;
/**
 * To store the coordinates and the eucledian distance between them
 */
class Point
{
    private:
    int x;
    int y;    

    public:
    Point(int x,int y);
    void setX(int x){this->x=x;}
    void setY(int y){this->y=y;}
    string toString();    
};