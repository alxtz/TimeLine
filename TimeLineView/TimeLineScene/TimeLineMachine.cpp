#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <QGraphicsRectItem>
#include <QBrush>
#include <QColor>
#include "TimeLineMachine.h"

using namespace std;

TimeLineMachine::TimeLineMachine(QGraphicsScene *inputScene)
{
    useScene = inputScene;

    readTimeLineData ();
    paintTimeLine ();

    srand(time(NULL));
}

void TimeLineMachine::readTimeLineData()
{
    ifstream inputCsv;

    inputCsv.open("./Data/Files/timeLine.csv" , ios::in);

    PlaneData * planeData;
    char foo; // for catching the coma
    string bar; //for converting

    string airName;
    int order;
    int landTime;
    int useTime;
    string apronName;
    int cost;

    while(getline(inputCsv , airName , ',' ))
    {
        planeData = new PlaneData();

        planeData->planeName = airName;
        cout<<"AirplaneName : "<<airName<<endl;


        getline(inputCsv , bar , ',' );
        order = atoi(bar.c_str ());
        planeData->order = order;
        cout<<"Order : "<<order<<endl;


        getline(inputCsv , bar , ',' );
        landTime = atoi(bar.c_str ());
        planeData->landTime = landTime;
        cout<<"UseTime : "<<landTime<<endl;


        getline(inputCsv , bar , ',' );
        useTime = atoi(bar.c_str ());
        planeData->useTime = (rand()%40)* 2;
        cout<<"UseTime : "<<useTime<<endl;


        getline(inputCsv , apronName , ',' );
        planeData->apronName = apronName;
        cout<<"UseApron : "<<apronName<<endl;


        getline(inputCsv , bar , ',' );
        cost = atoi(bar.c_str ());
        planeData->cost = cost;
        cout<<"Cost : "<<cost<<endl;


        planeDataList.push_back (planeData);


        getline(inputCsv , bar);
    }
}

void TimeLineMachine::paintTimeLine()
{
    cout<<"there are "<<planeDataList.size ()<<" planes"<<endl;

    //paint the rects first

    //first row
    QGraphicsRectItem * fooRect = new QGraphicsRectItem();
    fooRect->setRect (0 , 0 , 50 , 50);
    //fooRect->setBrush(QBrush(QColor(Qt::red)));
    useScene->addItem(fooRect);

    for(int x = 50; x<=1490; x+=60)
    {
        QGraphicsRectItem * hourRect = new QGraphicsRectItem();
        hourRect->setRect (x , 0 , 60 , 50);
        hourRect->setBrush(QBrush(QColor(Qt::yellow)));
        useScene->addItem (hourRect);
    }

    //apron row
    for(int y = 50; y<=480; y+=10)
    {
        QGraphicsRectItem * apronRect = new QGraphicsRectItem();
        apronRect->setRect (0 , y , 50 , 10);
        apronRect->setBrush(QBrush(QColor(Qt::blue)));
        useScene->addItem (apronRect);
    }

    //plane timeLine for each planeData
    for(int i=0; i<planeDataList.size (); ++i)
    {

        QGraphicsRectItem * timeLineRect = new QGraphicsRectItem();

        string realApronString = planeDataList.at(i)->apronName;
        realApronString = realApronString.erase (0 , 2);
        cout<<"the apron is "<<realApronString<<endl;
        int realApron = atoi(realApronString.c_str ());

        timeLineRect->setRect
        (
            50+planeDataList.at(i)->landTime ,
            50+(realApron-1)*10 ,
            planeDataList.at(i)->useTime ,
            10
        );

        timeLineRect->setBrush(QBrush(QColor(Qt::green)));
        useScene->addItem (timeLineRect);

    }

}


void TimeLineMachine::readTimeLineDataTest()
{
    ifstream inputCsv;

    inputCsv.open("./Data/Files/timeLine.csv" , ios::in);

    PlaneData * planeData;
    char foo; // for catching the coma
    string bar; //for converting

    string airName;
    int order;
    int landTime;
    int useTime;
    string apronName;
    int cost;

    while(getline(inputCsv , airName , ',' ))
    {
        planeData = new PlaneData();

        planeData->planeName = airName;
        cout<<"AirplaneName : "<<airName<<endl;


        getline(inputCsv , bar , ',' );
        order = atoi(bar.c_str ());
        planeData->order = order;
        cout<<"Order : "<<order<<endl;


        getline(inputCsv , bar , ',' );
        landTime = atoi(bar.c_str ());
        planeData->landTime = landTime;
        cout<<"UseTime : "<<landTime<<endl;


        getline(inputCsv , bar , ',' );
        useTime = atoi(bar.c_str ());
        planeData->useTime = useTime;
        cout<<"UseTime : "<<useTime<<endl;


        getline(inputCsv , apronName , ',' );
        planeData->apronName = apronName;
        cout<<"UseApron : "<<apronName<<endl;


        getline(inputCsv , bar , ',' );
        cost = atoi(bar.c_str ());
        planeData->cost = cost;
        cout<<"Cost : "<<cost<<endl;


        planeDataList.push_back (planeData);


        getline(inputCsv , bar);
    }
}
