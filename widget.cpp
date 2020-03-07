#include "widget.h"
#include <QPainter>
#include <QBitmap>
#include <QAction>



Widget::Widget(QWidget *parent) :
    QMainWindow(parent)
{
    //netWork
    tcpsocket = new QTcpSocket(this);
    t = new Talk();


    connect(tcpsocket,SIGNAL(readyRead()),this,SLOT(readMessage()));
//    connect(this,SIGNAL(send_name(QString)),)


    setMouseTracking(true);
    ismove = false;
    isShowPsw = false;
    this->setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(320,580);
    this->setAutoFillBackground(true);
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,
                QBrush(QPixmap(":/img/img/background (2).jpg").scaled(// 缩放背景图.
                    this->size(),
                    Qt::IgnoreAspectRatio,
                    Qt::SmoothTransformation)));             // 使用平滑的缩放方式
    this->setPalette(palette);
    QHBoxLayout *titlelayout = new QHBoxLayout;
    titlelayout->addLayout(setWindowTitleBtn());
    QVBoxLayout *btlayout = new QVBoxLayout;
    QVBoxLayout *mainlayout = new QVBoxLayout;
    mainlayout->addLayout(titlelayout);
    mainlayout->addStretch();
    btlayout->addLayout(getHeadImg(":/img/img/headimg1.jpg")); //头像图片
    btlayout->addLayout(getLoginLayout());
    btlayout->addLayout(getLoginBtn());
    mainlayout->addLayout(btlayout);
    mainlayout->addStretch();
    QHBoxLayout *btlabellayout = new QHBoxLayout;
    btlabellayout->addStretch();
    btlabellayout->addStretch();
    btlabellayout->setMargin(5);
    mainlayout->addLayout(btlabellayout);
    mainlayout->setSpacing(0);
    mainlayout->setMargin(0);
    QWidget *wid = new QWidget;
    wid->setMouseTracking(true);
    this->setCentralWidget(wid);
    wid->setLayout(mainlayout);
    connect(LoginBtn,SIGNAL(clicked(bool)),this,SLOT(on_LoginBtn_click()));
    connect(reguser,SIGNAL(clicked(bool)),this,SLOT(on_reguserBtn_click()));


    QObject::connect(this,SIGNAL(logSuccess()),this->t,SLOT(receiveSignMsg()));
    QObject::connect(this,SIGNAL(data_read(QString)),this->t->drwer,SLOT(recvInfo(QString)));
    QObject::connect(this,SIGNAL(data_read(QString)),this->t,SLOT(resolveMessage(QString)));
    QObject::connect(this,SIGNAL(data_read(QString)),this->t->drwer->c,SLOT(resolveMessage(QString)));
}

//network
void Widget::readMessage()
{
    QString data = tcpsocket->readAll();
    qDebug() << data;
    QStringList list=data.split("#");
    if(list[1]=="true")
    {
        emit logSuccess();
        emit data_read(data);
        this->hide();
            }
    else if(list[1]=="false")
    {
        QMessageBox::information(this,"信息提示","登录失败,用户名或密码错误!",QMessageBox::Ok);
        password->clear();
    }
    else
         return;

}

void Widget::displayError(QAbstractSocket::SocketError)
{
    qDebug() << "error:"<< tcpsocket->errorString(); //输出错误信息
}

void Widget::on_LoginBtn_click()
{

    QString info1 = username->text();
    QString info2 = password->text();
    if(info1 == "" || info2 == "")
    {
        username->setText("账号密码不能为空~");
    }
    else{
    QString info = info1 + "+" + info2 + "+" + "online";
    qDebug() << info;
    QByteArray ba = info.toLatin1();

    qDebug() << ba;
    tcpsocket->connectToHost("127.0.0.1",6666);
    tcpsocket->write(ba);

    }
}

void Widget::on_reguserBtn_click()
{
    QString info1 = username->text();
    QString info2 = password->text();
    if(info1 == "" || info2 == "")
    {
        username->setText("账号密码不能为空~");
    }
    else{
    QString info = "~" + info1 + "+" + info2 + "+" + "online";
    qDebug() << info;
    QByteArray ba = info.toLatin1();

    qDebug() << ba;
    tcpsocket->connectToHost("127.0.0.1",6666);
    tcpsocket->write(ba);
}

}

Widget::~Widget()
{

}


QLayout* Widget::setWindowTitleBtn()
{
    QHBoxLayout *layout = new QHBoxLayout;
    minBtn = new QPushButton;
    closeBtn = new QPushButton;
    QPixmap icon1(":/img/img/min.png");
    QPixmap icon2(":/img/img/close.png");
    minBtn->setIcon(icon1);
    closeBtn->setIcon(icon2);
    minBtn->setStyleSheet("QPushButton{border-left:0px;border-right:0px;border-top:0px;border-bottom:0px;width:30px;height:20px;color:#D6D6D6}"
                          "QPushButton:hover{border-left:0px;border-right:0px;border-top:0px;border-bottom:0px;width:30px;height:20px;"
                          "background-color:qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.368182 rgba(198,198,198,75))}"
                          "QPushButton:pressed{border-left:0px;border-right:0px;border-top:0px;border-bottom:0px;width:30px;height:20px;"
                          "background-color:qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.368182 rgba(100,100,100,75))}");
    closeBtn->setStyleSheet("QPushButton{border-left:0px;border-right:0px;border-top:0px;border-bottom:0px;width:30px;height:20px;color:#D6D6D6}"
                          "QPushButton:hover{border-left:0px;border-right:0px;border-top:0px;border-bottom:0px;width:30px;height:20px;"
                          "background-color:qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0.368182 rgba(198,198,198,75))}"
                          "QPushButton:pressed{border-left:0px;border-right:0px;border-top:0px;border-bottom:0px;width:30px;height:20px;"
                          "background-color:red}");
    QFont font1("Microsoft YaHei",20,75);
    QFont font2("Microsoft YaHei",15,75);
    minBtn->setFont(font1);
    closeBtn->setFont(font2);
    connect(closeBtn,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(minBtn,SIGNAL(clicked(bool)),this,SLOT(showMinimized()));
    connect(closeBtn,SIGNAL(pressed()),this,SLOT(doNotMove()));
    connect(minBtn,SIGNAL(pressed()),this,SLOT(doNotMove()));
    QHBoxLayout *titlelayout = new QHBoxLayout;
    layout->addLayout(titlelayout);
    layout->addStretch();
    layout->addWidget(minBtn);
    layout->addWidget(closeBtn);
    layout->setSpacing(0);
    layout->setMargin(0);
    return layout;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        if(event->pos().ry()<30 && event->pos().rx()<250)
        {
            offset.setX(event->globalPos().rx()-this->pos().rx());
            offset.setY(event->globalPos().ry()-this->pos().ry());
            ismove = true;
        }
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        if(event->pos().ry() < 30 && event->pos().rx()<250)
        {
            if(ismove)
            {
                move(event->globalX()-this->offset.rx(),event->globalY()-this->offset.ry());
            }
        }
    }
}

void Widget::doNotMove()
{
    ismove = false;
}

QPixmap Widget::pixmapToRound(QPixmap &src, int radius)
{
    if (src.isNull()) {
        return QPixmap();
    }

    QSize size(2*radius, 2*radius);
    QBitmap mask(size);
    QPainter painter(&mask);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    painter.fillRect(0, 0, size.width(), size.height(), Qt::white);
    painter.setBrush(QColor(0, 0, 0));
    painter.drawRoundedRect(0, 0, size.width(), size.height(), 99, 99);

    QPixmap image = src.scaled(size);
    image.setMask(mask);
    return image;
}

QLayout* Widget::getHeadImg(QString src)
{
    QPixmap pixmap_userIcon;
    pixmap_userIcon.load(src);
    QPixmap fitpixmap_userIcon=pixmap_userIcon.scaled(120, 120, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    fitpixmap_userIcon = this->pixmapToRound(fitpixmap_userIcon,100);
    QHBoxLayout *layout = new QHBoxLayout;
    QLabel *headimg = new QLabel;
    headimg->setScaledContents(true);
    headimg->setFixedSize(120,120);
    headimg->setPixmap(fitpixmap_userIcon);
    layout->addWidget(headimg);
    return layout;
}

QLayout* Widget::getLoginLayout()
{
    username = new QLineEdit;
    password = new QLineEdit;
    username->setStyleSheet("QLineEdit{border:1.5px solid white;border-top:0px;border-left:0px;border-right:0px;background:transparent;height:40px;"
                            "font-size:20px;color:white}");
    password->setStyleSheet("QLineEdit{border:1.5px solid white;border-top:0px;border-left:0px;border-right:0px;background:transparent;height:40px;"
                            "font-size:20px;color:white}");
    QAction *action1 = new QAction;
    action1->setIcon(QIcon(":/img/img/username.png"));
    username->addAction(action1,QLineEdit::LeadingPosition);
    username->setFont(QFont("Microsoft YaHei",25,QFont::Bold));
    username->setPlaceholderText("用户名");
    QAction *action2 = new QAction;
    action2->setIcon(QIcon(":/img/img/password.png"));
    password->addAction(action2,QLineEdit::LeadingPosition);
    QAction *showpassword = new QAction;
    showpassword->setToolTip("显示密码");
    showpassword->setIcon(QIcon(":/img/img/psw.png"));
    password->addAction(showpassword,QLineEdit::TrailingPosition);
    password->setFont(QFont("Microsoft YaHei",25,QFont::Bold));
    password->setEchoMode(QLineEdit::Password);
    password->setPlaceholderText("密码");
    connect(showpassword,SIGNAL(triggered(bool)),this,SLOT(ShowPassword()));
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(username);
    layout->addWidget(password);
    layout->setSpacing(10);
    layout->setMargin(10);
    return layout;
}

void Widget::ShowPassword()
{
    isShowPsw = ! isShowPsw;
    if(isShowPsw)
        password->setEchoMode(QLineEdit::Normal);
    else
        password->setEchoMode(QLineEdit::Password);
}

QLayout* Widget::getLoginBtn()
{
    LoginBtn = new QPushButton("登录");
    LoginBtn->setStyleSheet("QPushButton{border:1.5px solid white;background:transparent;height:30px;font-size:20px;"
                            "border-radius:10px;padding:2px 4px;color:white}"
                            "QPushButton:hover{padding-left:-3px}"
                            "QPushButton:pressed{padding-top:6px}");
    LoginBtn->setFont(QFont("Microsoft YaHei",25,QFont::Bold));
    LoginBtn->setFixedWidth(100);
    reguser = new QPushButton("注册用户");
    reguser->setStyleSheet("QPushButton{background:transparent;height:20px;font-size:15px;color:white}"
                           "QPushButton:hover{padding-left:-3px}"
                           "QPushButton:pressed{padding-top:6px}");
    reguser->setFixedWidth(65);
    reguser->setFont(QFont("Microsoft YaHei",25,QFont::Bold));
    forgetpasw = new QPushButton("忘记密码");
    forgetpasw->setStyleSheet("QPushButton{background:transparent;height:20px;font-size:15px;color:white}"
                              "QPushButton:hover{padding-left:-3px}"
                              "QPushButton:pressed{padding-top:6px}");
    forgetpasw->setFixedWidth(65);
    forgetpasw->setFont(QFont("Microsoft YaHei",25,QFont::Bold));
    QHBoxLayout *btn = new QHBoxLayout;
    btn->addStretch();
    btn->addWidget(LoginBtn);
    btn->addStretch();
    QHBoxLayout *ot = new QHBoxLayout;
    ot->addStretch();
    ot->addWidget(reguser);
    ot->addStretch();
    ot->addWidget(forgetpasw);
    ot->addStretch();
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(btn);
    layout->addLayout(ot);
    layout->setStretchFactor(btn,1);
    layout->setStretchFactor(ot,2);
    layout->setSpacing(25);
    return layout;
}
