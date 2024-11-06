#include<iostream>
#include<fstream>
#include<vector>
#include"FileUtils.h"
#include"Tour.h"
using namespace std;

#define INIT_TEMP 10000 //No of Iterations the program runs for
#define COOLING_RATE 0.003

int main()
{
    vector<Point> points;
    points.reserve(131);
    
    //Reading from default Datafile 
    points=FileUtils::readDatasetFromFile();
    
    //TODO Start anealing
    //TODO Add points into a Tour and maintain 2 vectors 1.current 2.best
    Tour current(points),best;
    //Creating an initial solution
    double temp = INIT_TEMP;
    double coolingRate = COOLING_RATE;
    cout<<"Temp "<<temp<<endl;
    cout<<"Cooling Rate "<<coolingRate<<endl;
    // for(int i=0;i<points.size();i++)
    //     cout<<points[i].toString()<<" ";

    
    best = current.getTour();
    
    cout<<"Current Distance : "<<current.getTotalDistance()<<endl;
    cout<<"Path : "<<current.getTour()<<endl;
    cout<<"Best Distance : "<<best.getTotalDistance()<<endl;
    cout<<"Project End !! "<<endl;

    return 0;
}