#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "./TimeLineView/TimeLineView.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private:
        TimeLineView * timeLineView;
};


#endif // MAINWINDOW_H
