#-------------------------------------------------
#
# Project created by QtCreator 2019-07-10T11:35:50
#
#-------------------------------------------------

QT       += network
QT       += core gui
QT       += multimedia
QT       += sql

TARGET = sqlite

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DiyQQ
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        widget.cpp \
    chat.cpp \
    emotion.cpp \
    talk.cpp \
    drawer.cpp \
    mylistwidget.cpp \
    two.cpp \
    mychatwidget.cpp \
    friendmsg.cpp \
    mymessagebox.cpp \
    search.cpp \
    wechat.cpp \
    drawer_2.cpp

HEADERS  += widget.h \
    chat.h \
    emotion.h \
    talk.h \
    header.h \
    drawer.h \
    mylistwidget.h \
    two.h \
    mychatwidget.h \
    friendmsg.h \
    mymessagebox.h \
    search.h \
    wechat.h \
    drawer_2.h

FORMS    += \
    chat.ui \
    emotion.ui \
    friendmsg.ui \
    mychatwidget.ui \
    mylistwidget.ui \
    mymessagebox.ui \
    search.ui \
    talk.ui \
    two.ui \
    wechat.ui

RESOURCES += \
    emotion.qrc \
    img.qrc
