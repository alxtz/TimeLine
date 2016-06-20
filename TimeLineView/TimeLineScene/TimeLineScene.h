#ifndef TIMELINESCENE_H
#define TIMELINESCENE_H


#include <QGraphicsScene>
#include "./TimeLineMachine.h"

class TimeLineScene : public QGraphicsScene
{
    friend class TimeLineMachine;

    public:
        TimeLineScene(QObject * parent);

    private:
        TimeLineMachine * timeLineMachine;
};

#endif // TIMELINESCENE_H
