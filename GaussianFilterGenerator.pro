#-------------------------------------------------
#
# Project created by QtCreator 2014-02-23T12:51:29
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = GaussianFilterGenerator
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

INCLUDEPATH += D://opencv//sources//opencv_bin//install//include

LIBS += D://opencv//sources//opencv_bin//bin//*.dll
