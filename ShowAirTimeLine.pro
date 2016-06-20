#-------------------------------------------------
#
# Project created by QtCreator 2016-06-20T10:55:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShowAirTimeLine
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    TimeLineView/TimeLineView.cpp \
    TimeLineView/TimeLineScene/TimeLineScene.cpp \
    TimeLineView/TimeLineScene/TimeLineMachine.cpp \
    TimeLineView/TimeLineScene/PlaneData.cpp

HEADERS  += MainWindow.h \
    TimeLineView/TimeLineView.h \
    TimeLineView/TimeLineScene/TimeLineScene.h \
    TimeLineView/TimeLineScene/TimeLineMachine.h \
    TimeLineView/TimeLineScene/PlaneData.h
