#include "talk.h"
#include "ui_talk.h"
Talk::Talk(QWidget *parent) : QWidget(parent),
    ui(new Ui::Talk)
{
    ui->setupUi(this);

    i = 0;
    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
    setAttribute(Qt::WA_TranslucentBackground);
    setAutoFillBackground(true);

    ui->label->installEventFilter(this);
    ui->label_2->installEventFilter(this);
    ui->label_9->installEventFilter(this);
    ui->label_10->installEventFilter(this);
    ui->label_8->installEventFilter(this);
    ui->lineEdit_2->setPlaceholderText("今天有什么想说的呢……");


    QImage image2;
    image2.load(":/img/img/head.jpg");
    QImage result2 = image2.scaled(55,55,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label_3->setPixmap(QPixmap::fromImage(result2));
    ui->label_3->setStyleSheet("QLabel{padding:2px;border-radius:4px;}QLabel:hover{border:2px solid rgb(12, 255, 235);}");

    QImage image3;
    image3.load(":/img/img/myicon_1.png");

    qstacklayout = new QStackedLayout;
    ui->widget_2->setLayout(qstacklayout);

    drwer=new Drawer(this);
    two=new Two;
    qstacklayout->addWidget(drwer);
    qstacklayout->addWidget(two);

     QRect rect = QApplication::desktop()->availableGeometry();
     move(rect.width() - width()-280,5);
     QIcon icon = QIcon(":/img/img/kobe_1.jpg"); //png,ico,svg,bmp各种格式，尺寸无限制（推荐60x60），加载图标可以用相对、绝对、资源路径
     trayIcon = new QSystemTrayIcon(this);
     trayIcon->setIcon(icon);
     trayIcon->show();

     connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(iconActivate(QSystemTrayIcon::ActivationReason)));
     showTimer = new QTimer(this);
     showTimer2 = new QTimer(this);
     connect(showTimer,SIGNAL(timeout()),this,SLOT(onMove()));
     connect(showTimer2,SIGNAL(timeout()),this,SLOT(onMove2()));

     mouse_press = false;
     ui->label_8->installEventFilter(this);
     ui->label_9->installEventFilter(this);
     ui->label_10->installEventFilter(this);

     connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(showResearch()));




}

Talk::~Talk()
{
    delete ui;
}

void Talk::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
     {
         this->setMouseTracking(true);
          mouse_press = true;
          move_point = event->pos();
     }

}

void Talk::mouseReleaseEvent(QMouseEvent *event)
{
    //设置鼠标为未被按下
        mouse_press = false;
    if(y()<=0)
    {
        mDesktopHeight=0;
        showTimer->start(0.5);
    }
}

void Talk::mouseMoveEvent(QMouseEvent *event)
{
    //若鼠标左键被按下
        if(mouse_press)
        {
            i++;
            //鼠标相对于屏幕的位置
            QPoint move_pos = event->globalPos();
           //移动主窗体位置
           this->move(move_pos - move_point);
        }
}


bool Talk::eventFilter(QObject *object, QEvent *e)
{
    if(e->type()==QEvent::MouseButtonPress&&object==ui->label){
        hide();
        qDebug()<<"最小化";
    }
    else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_2){
         this->close();
        if (!(QMessageBox::information(this,tr("Tip!"),tr("Do you really want exit ?"),tr("Yes"),tr("No"))))
              {
                    QApplication* app;
                    app->exit(0);
              }
    }
    else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_9){
        qDebug()<<"点击了第一页";
        qstacklayout->setCurrentIndex(0);
    }
    else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_10){
        qDebug()<<"点击了第二页";
        qstacklayout->setCurrentIndex(1);
    }
    else if(e->type()==QEvent::MouseButtonPress&&object==ui->label_8){
        qDebug()<<"点击了第三页";
        qstacklayout->setCurrentIndex(0);
        ui->label_8->setOpenExternalLinks(true);
        ui->label_8->setText("<style> a {text-decoration: none} </style> <a href=\"http://www.4399.com/\">.");
    }
    else if(object==ui->label_8&&e->type()==QEvent::Enter&&y()<0){
        qDebug()<<"鼠标进入了标签且y小于0";
         qDebug()<<e->type();
        //move(x(),5);
         mDesktopHeight2=y();
         showTimer2->start(0.5);

    }
    else if(object==ui->label_9&&e->type()==QEvent::Enter&&y()<0){
        qDebug()<<"鼠标进入了标签且y小于0";
        qDebug()<<e->type();
       //move(x(),5);
        mDesktopHeight2=y();
        showTimer2->start(0.5);
    }
    else if(object==ui->label_10&&e->type()==QEvent::Enter&&y()<0){
        qDebug()<<"鼠标进入了标签且y小于0";
         qDebug()<<e->type();
        //move(x(),5);
         mDesktopHeight2=y();
         showTimer2->start(0.5);
    }
    return false;
}


void Talk::iconActivate(QSystemTrayIcon::ActivationReason reason)

{
    switch (reason) {
    case QSystemTrayIcon::DoubleClick:

        break;
    case QSystemTrayIcon::Trigger:
        mouse_press = false;
        showNormal();
        raise();
        activateWindow();
        move(x(),5);
        break;
    case QSystemTrayIcon::MiddleClick:

        break;

    default:
        break;
    }
}

void Talk::hideEvent(QHideEvent *event)

{
    if(trayIcon->isVisible())
    {
        hide();
        event->ignore();
    }
}

void Talk::onMove()
{
    mDesktopHeight--;
    move(x(), mDesktopHeight);
        if (mDesktopHeight <= -610)
        {
            showTimer->stop();
        }
}

void Talk::onMove2()
{
    mDesktopHeight2++;
    move(x(), mDesktopHeight2);
    if (y() >=5)
    {
        showTimer2->stop();
    }
}

void Talk::resolveMessage(const QString data)
{
    QString all = data;
    qDebug() << all << "  在resolve那里能否督导数据";
    QString nichen = data.section('-',0,0);
    ui->label_6->setText(nichen);
}

void Talk::receiveSignMsg()
{
    this->show();
}




