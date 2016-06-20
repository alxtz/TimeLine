#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "TimeLineMachine.h"

using namespace std;

TimeLineMachine::TimeLineMachine(QGraphicsScene *inputScene)
{
    useScene = inputScene;

    readTimeLineData ();
}

void TimeLineMachine::readTimeLineData()
{
    ifstream inputCsv;

    inputCsv.open("./Data/Files/timeLine.csv" , ios::in);

    char foo; // for catching the coma
    string bar; //for converting

    string airName;
    int order;
    int landTime;
    string apronName;
    int cost;

    while(getline(inputCsv , airName , ',' ))
    {
        cout<<"AirplaneName : "<<airName<<endl;
        getline(inputCsv , bar , ',' );
        order = atoi(bar.c_str ());
        cout<<"Order : "<<order<<endl;


        getline(inputCsv , bar , ',' );
        landTime = atoi(bar.c_str ());
        cout<<"LandTime : "<<landTime<<endl;


        getline(inputCsv , apronName , ',' );
        cout<<"UseApron : "<<apronName<<endl;


        getline(inputCsv , bar , ',' );
        cost = atoi(bar.c_str ());
        cout<<"Cost : "<<cost<<endl;


        getline(inputCsv , bar);
    }
}
