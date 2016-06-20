#include "TimeLineView.h"

TimeLineView::TimeLineView(QWidget *parent)
 : QGraphicsView(parent)
{
    // view settings
    setFixedSize ( 1490+2 , 480+2 );


    // set the scene
    timeLineScene = new TimeLineScene(this);
    setScene(timeLineScene);
}
