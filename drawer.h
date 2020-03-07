#ifndef DRAWER_H
#define DRAWER_H

#include <QObject>
#include <QToolBox>
#include <QToolButton>
#include<QListWidgetItem>
#include<QTcpSocket>
#include"widget.h"
#include"mylistwidget.h"
#include "chat.h"

class Drawer:public QToolBox
{
    Q_OBJECT
public:
    Drawer(QWidget *parent=0,Qt::WindowFlags f=0);
    chat * c;
       void addfriend(QString &name,QString &sign);

private:

    QListWidget* listWidget;
    QListWidget* listWidget2;

//    QTcpSocket *readInfo_socket;
public slots:
    void showitemclick(QListWidgetItem *item);
//    void setInfo();
//    void receive_widget_data(QString *temp);
    void recvInfo(const QString data);


};


#endif // DRAWER_H
