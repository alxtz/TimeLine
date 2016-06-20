#ifndef TIMELINEVIEW_H
#define TIMELINEVIEW_H


#include <QGraphicsView>
#include "./TimeLineScene/TimeLineScene.h"

class TimeLineView : public QGraphicsView
{
    public:
        TimeLineView(QWidget * parent = 0);

    private:
        TimeLineScene * timeLineScene;
};


#endif // TIMELINEVIEW_H
