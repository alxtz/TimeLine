#ifndef TIMELINEMACHINE_H
#define TIMELINEMACHINE_H


#include <vector>
#include <QGraphicsScene>
#include "./PlaneData.h"

using namespace std;

class TimeLineMachine
{
    public:
        TimeLineMachine(QGraphicsScene * inputScene);

    private:
        QGraphicsScene * useScene;

        void readTimeLineData();

        void readTimeLineDataTest ();

        void paintTimeLine();

        vector<PlaneData * > planeDataList;
};


#endif // TIMELINEMACHINE_H
