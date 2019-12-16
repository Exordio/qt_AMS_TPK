#-------------------------------------------------
#
# Project created by QtCreator 2015-08-16T23:58:29
#
#-------------------------------------------------

QT       += core
QT       += gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QDataMapperWidget
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp \
    dialogadddevice.cpp \
    dialog.cpp \
    unlock_animation.cpp \
    add_comment.cpp \
    openrecordclass.cpp

HEADERS  += mainwindow.h \
    database.h \
    dialogadddevice.h \
    dialog.h \
    unlock_animation.h \
    add_comment.h \
    openrecordclass.h

FORMS    += mainwindow.ui \
    dialogadddevice.ui \
    dialog.ui \
    unlock_animation.ui \
    dialog_filter_device.ui \
    add_comment.ui \
    openrecordclass.ui

RESOURCES += \
    res.qrc

DISTFILES +=
