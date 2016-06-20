#include "TimeLineView.h"

TimeLineView::TimeLineView(QWidget *parent)
 : QGraphicsView(parent)
{
    //設定視窗
    setHorizontalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy (Qt::ScrollBarAlwaysOff);


    // view settings
    setFixedSize ( 1490+2-1000  , 480+2 );



    // set the scene
    timeLineScene = new TimeLineScene(this);
    setScene(timeLineScene);
    timeLineScene->setSceneRect ( 0 , 0 ,1490 , 480);

    centerOn (490/2 + 50 , 0);

}
