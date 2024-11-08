#include<iostream>
#include<fstream>
#include<vector>
#include<random>
#include"FileUtils.h"
#include"Tour.h"
using namespace std;

#define INIT_TEMP 10000 //No of Iterations the program runs for
#define COOLING_RATE 0.3 //Only 0.3 is working as of now but gives wrong answer

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
    cout<<"Current Distance : "<<current.getTotalDistance()<<endl;
    best = current.getTour();
    //Loop until the system has cooled and optimal path is found
    while(temp > 1.0)
    {
        int firstIndexToSwap = rand()%(current.getTour().size()+1);
        int nextIndexToSwap = rand()%(current.getTour().size()+1);

        while(firstIndexToSwap==nextIndexToSwap) { nextIndexToSwap = rand()%(current.getTour().size()+1); }
        //Get points and swap them
        Point p1 = current.getPoint(firstIndexToSwap);
        Point p2 = current.getPoint(nextIndexToSwap);

        current.setPoint(firstIndexToSwap,p2);
        current.setPoint(nextIndexToSwap,p1);
        //Checking distance and setting best 
        if(best.getTotalDistance()>current.getTotalDistance())
            best = current;

        temp*= 1-coolingRate;
    }
    cout<<"Best Distance : "<<best.getTotalDistance()<<endl;
    cout<<"Project End !! "<<endl;

    return 0;
}