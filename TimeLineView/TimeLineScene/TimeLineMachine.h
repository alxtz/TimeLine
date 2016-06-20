#ifndef TIMELINEMACHINE_H
#define TIMELINEMACHINE_H


#include <QGraphicsScene>

class TimeLineMachine
{
    public:
        TimeLineMachine(QGraphicsScene * inputScene);

    private:
        QGraphicsScene * useScene;

        void readTimeLineData();
};


#endif // TIMELINEMACHINE_H
