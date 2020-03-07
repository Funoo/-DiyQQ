#include "emotion.h"
#include "ui_emotion.h"
#include <QLabel>
#include<QDebug>
Emotion::Emotion(QWidget *parent):QWidget(parent),
    ui(new Ui::Emotion)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint | Qt::FramelessWindowHint);
    ui->label->installEventFilter(this);
    ui->label_2->installEventFilter(this);
    ui->label_3->installEventFilter(this);
    ui->label_4->installEventFilter(this);
    ui->label_5->installEventFilter(this);
    ui->label_6->installEventFilter(this);
    ui->label_7->installEventFilter(this);
}

Emotion::~Emotion()
{
    delete ui;
}

bool Emotion::eventFilter(QObject *object, QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress && object == ui->label)
    {
        emit imgurl(QString(":/img/img/head.jpg"));
        hide();
    }
    else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_2){
         emit imgurl(QString(":/img/img/emotion26.png"));
         hide();
        }
        else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_3){
         emit imgurl(QString("/img/img/emotion26.png"));
         hide();
        }
        else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_4){
         emit imgurl(QString("/img/img/emotion26.png"));
         hide();
        }
        else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_5){
          emit imgurl(QString("/img/img/emotion26.png"));
         hide();
        }
        else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_6){
         emit imgurl(QString("/img/img/emotion26.png"));
         hide();
        }
        else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_7){
         emit imgurl(QString("/img/img/emotion26.png"));
         hide();
        }
    return false;
}


