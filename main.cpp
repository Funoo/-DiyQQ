#include "widget.h"
#include "chat.h"
#include "emotion.h"
#include "talk.h"
#include "drawer.h"
#include "drawer_2.h"
#include "mylistwidget.h"
#include <QApplication>
#include "one.h"
#include "wechat.h"
#include "search.h"
#include "mymessagebox.h"
#include<QTextCodec>
#include <QObject>
#include "friendmsg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
//    Drawer d;    //

////    Talk t;

////    QObject::connect(&w,SIGNAL(logSuccess()),&t,SLOT(receiveSignMsg()));
//////    QObject::connect(&w,SIGNAL(send_socket(QTcpSocket*)),&d,SLOT(receive_socket(QTcpSocket*)));
////    QObject::connect(&w,SIGNAL(data_read(QString)),&d,SLOT(recvInfo(QString)));
//    chat c;
//    c.show();
//    Talk t;
//    t.show();
//    Drawer d;
//    d.show();


    //连接登录界面王聊天界面发送myname
//    connect()

    QTextCodec* codec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    return a.exec();
}
