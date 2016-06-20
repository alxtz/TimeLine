#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    timeLineView = new TimeLineView(this);
    setFixedSize ( 1490+2 , 480+2 );
}

MainWindow::~MainWindow()
{

}
