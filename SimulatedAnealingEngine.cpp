#include<iostream>
#include<fstream>
#include<vector>
#include"FileUtils.h"
using namespace std;

int main()
{
    vector<Point> points;
    points.reserve(131);
    
    //Reading from default Datafile 
    points=FileUtils::readDatasetFromFile();
    
    //TODO Start anealing

    for(int i=0;i<points.size();i++)
        cout<<points[i].toString()<<endl;

    cout<<"Project End !! "<<endl;

    return 0;
}