#include <QBrush>
#include <QImage>
#include "TimeLineScene.h"

TimeLineScene::TimeLineScene(QObject *parent)
 : QGraphicsScene(parent)
{
    //the size is (1440+50)x(43*15+50)
    setSceneRect( 0 , 0 , 1490 , 480);
    setBackgroundBrush (QBrush(QImage("./Data/Images/background.jpg")));


    //set the machine
    timeLineMachine = new TimeLineMachine(this);

}
