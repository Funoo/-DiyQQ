#include "drawer.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include<QDebug>
#include<mylistwidget.h>
#include<QFile>
#include "two.h"
#include "chat.h"
#include"widget.h"


Drawer::Drawer(QWidget *parent,Qt::WindowFlags )
    :QToolBox(parent,0)
{

    //netWork
//    readInfo_socket = new QTcpSocket(this);

    qDebug() << "进入了drawer";
    c = new chat;

//    connect(readInfo_socket,SIGNAL(readyRead()),this,SLOT(setInfo()));
    //自定义列表
    listWidget = new QListWidget;
    listWidget2 = new QListWidget;
    QVBoxLayout *layout4=new QVBoxLayout(listWidget);
    //这里的demo是运用itemclick信号.
    connect(listWidget,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(showitemclick(QListWidgetItem*)));

    //陌生人里
    QListWidgetItem *listItem4 = new QListWidgetItem();
    listWidget2->addItem(listItem4);
    Mylistwidget* mlistwidget4=new Mylistwidget();
    listItem4->setSizeHint(QSize(0, 62));
    listWidget2->setItemWidget(listItem4, mlistwidget4);

    listWidget->setStyleSheet("QListWidget::item:hover {background-color:#FCF0C1;}");
    listWidget2->setStyleSheet("QListWidget::item:hover {background-color:#FCF0C1;}");

    //添加至主窗口
    this->addItem(listWidget,tr("我的好友"));
    QVBoxLayout *layout1=new QVBoxLayout(listWidget2);
    this->addItem(listWidget2,tr("陌生人"));
    this->setStyleSheet("QToolBox::tab {background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);border-radius: 2px;color: black;}QToolBox::tab:selected { /* italicize selected tabs */font: italic 16px;color: white; }");


}

void Drawer::addfriend(QString &name,QString &sign)
{

    QListWidgetItem *listItem = new QListWidgetItem();
    listWidget->addItem(listItem);
    Mylistwidget* mlistwidget=new Mylistwidget();
    listItem->setSizeHint(QSize(0, 62));
    mlistwidget->init(name,sign);
    listWidget->setItemWidget(listItem, mlistwidget);
    qDebug() << "添加了好友";
}


//some debug
void Drawer::showitemclick(QListWidgetItem *item)
{
     qDebug()<<item->text();
     qDebug()<<listWidget->row(item);
     qDebug() << "wodainle";
     c->show();
}

void Drawer::recvInfo(const QString data)
{
    QString first = data;
    QString all = first.section('-', 1, 1);
    qDebug() << all;
    for(int i = 0; i < 3; i++)
    {
       QString divide = all.section('/', i, i);

       QString  name = divide.section('*', 0, 0);
       QString sign = divide.section('*', 1, 1);
       QString CompuID = divide.section('*', 2, 2);
       qDebug() << name << " " << sign << " " << CompuID;
       addfriend(name,sign);

    }
    qDebug() << first << "555";

}




