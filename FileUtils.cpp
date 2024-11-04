#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include"FileUtils.h"
#define SKIP_TEXT 232 //Change the value as per the file
using namespace std;

vector<Point> FileUtils::readDatasetFromFile()
{
    ifstream infile("xqf131.tsp");
    vector<Point> points;
    points.reserve(131);
    string line;
    
    if(!infile)
       cerr<<"Error in Creating file"<<endl;

    infile.seekg(SKIP_TEXT);
    // if(infile.is_open())
    //     cout<<"File is opened !! "<<endl;
    // else
    //     cout<<"Error in opening!!"<<endl;

    while(getline(infile,line) && line.compare("EOF")!=0)
    {
        points.push_back(extractAndFormPoint(line));
        //cout<<line<<endl;
        //break; //Uncomment to Test     
    }
    
    infile.close(); 

    return points;
}

Point FileUtils::extractAndFormPoint(string line)
{
    int a,b;
    string token[3];
    int index=0;
    char value;
    Point p(0,0);

    for(int i=0;i<line.size();i++)
    {
        value=line.at(i);
        token[index]=token[index]+value;
        if(value==' ')
        {
            index++;            
        }
    }
    a=stoi(token[1]);
    b=stoi(token[2]);
    p.setX(a);p.setY(b);    
    return p;
}