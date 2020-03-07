#include "chat.h"
#include "ui_chat.h"
#include <QDesktopWidget>
#include <QMessageBox>
#include <QTextCodec>

chat::chat(QWidget *parent):QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    ui->label_4->installEventFilter(this);
    ui->label_5->installEventFilter(this);
    QFile file(":/myqss/scrollbar.qss");
    file.open(QFile::ReadOnly);
    ui->textBrowser->verticalScrollBar()->setStyleSheet(file.readAll());
    ui->label_8->installEventFilter(this);
    move((QApplication::desktop()->width() - width())/2,(QApplication::desktop()->height() - height()-20)/2);
    emotion=new Emotion();
        connect(emotion,SIGNAL(imgurl(QString)),this,SLOT(sendemotion(QString)));
    mp_clientSocket = new QTcpSocket(this);                        //7/16
    mp_clientSocket->connectToHost("127.0.0.1",8888);
    connect(mp_clientSocket, SIGNAL(readyRead()), this, SLOT(ClientRecvData()));
}

chat::~chat()
{
    delete ui;
}

void chat::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        this->setMouseTracking(true);
        mouse_press = true;
        move_point = e->pos();
        qDebug() << "chat move";
    }
}

void chat::mouseReleaseEvent(QMouseEvent *e)
{
    mouse_press = false;
}

void chat::mouseMoveEvent(QMouseEvent *e)
{
    if(mouse_press)
    {
        QPoint move_pos = e->globalPos();
        this->move(move_pos - move_point);
    }
}

bool chat::eventFilter(QObject *object, QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress && object == ui->label_5)
    {
        this->hide();
    }
    else if(e->type() == QEvent::MouseButtonPress && object == ui->label_4)
    {
        showMinimized();
        qDebug() << "最小化";
    }
    //发表情噢
    else if(e->type() == QEvent::MouseButtonPress && object == ui->label_8)
    {
        qDebug() << ui->label_8->x();
        emotion->move(x() - 10,ui->label_8->y() - 100);
        emotion->show();
    }
    return false;
}

void chat::showEvent(QShowEvent *event)
{
    mouse_press = false;
}

void chat::resolveMessage(const QString data)
{
    QString all = data;
    qDebug() << all << "  在resolve那里能否督导数据";
    QString nichen = data.section('-',0,0);
    ui->label_2->setText(nichen);
}



void chat::on_pushButton_2_clicked()
{
    QString content = ui->textEdit->toPlainText();
    QString content_2 = ui->label_2->text();
    qDebug() << content_2;
    qDebug()<<content.length();
        if(content.length()>=23){
          QString s1="<img width='30' height='30' src='qrc:/img/img/headimg1.jpg' style='float:right;margin-left:15px;margin-right:15px;'><div style='background:rgb(205,215,226);padding-top:8px;float:right;margin-top:10px;margin-right:45px;padding:10px;margin-left:60px;'><span style='font-size:15px;font-family:'Microsoft YaHei';margin-top:2px;'>"+content+"</span></div><br><br><br>";
         ui->textBrowser->insertHtml(s1);

         // 7/16
         qDebug() << "有传数据否？";
         QString allMsg = content_2 + "@" + content;
         QByteArray ba =allMsg.toLatin1();
         char * tem = ba.data();
         mp_clientSocket->write(tem);
         ui->textEdit->clear(); //不能再用qtcpsocket
         qDebug() << "传过去否？";
        }
        else{
            int flag=60+(24-content.length())*15;
            QString myflag=QString::number(flag, 10);
            qDebug()<<myflag;
            QString s1="<img width='30' height='30' src='qrc:/img/img/headimg1.jpg' style='float:right;margin-left:15px;margin-right:15px;'><div style='background:rgb(205,215,226);padding-top:8px;float:right;margin-top:10px;margin-right:45px;padding:10px;margin-left:"+myflag+"px;'>";
            s1+="<span style='font-size:15px;font-family:'Microsoft YaHei';margin-top:2px;'>"+content+"</span></div><br><br><br>";
            qDebug()<<s1;
           ui->textBrowser->insertHtml(s1);

           // 7/16
           qDebug() << "有传数据否？";
           QString allMsg = content_2 + "@" + content;
           QByteArray ba =allMsg.toLatin1();
           char * tem = ba.data();
           qDebug() << ba;
           mp_clientSocket->write(tem);
           ui->textEdit->clear(); //不能再用qtcpsocket
           qDebug() << "di2 part传过去否？";
        }



}

void chat::sendemtion(QString s)
{
    QString s1="<img width='30' height='30' src='qrc:/10.jpeg' style='float:right;margin-left:15px;margin-right:15px;'><div style='background:rgb(205,215,226);padding-top:8px;float:right;margin-top:10px;margin-right:45px;padding:10px;margin-left:387px;'><img src='"+s+"'></div><br><br><br>";
    ui->textBrowser->insertHtml(s1);
}

void chat::on_pushButton_clicked()
{
    this->hide();
}

void chat::ClientRecvData()
{   
    QString receiveMsg = mp_clientSocket->readAll();
    qDebug() << receiveMsg;
    int flag = 0;
    qDebug()<<"在此处检验传来的数据与自己的name     "<<receiveMsg.section('@',0,0)<<"  "<<ui->label_2->text()<<endl;
    if(receiveMsg.section('@',0,0).size() ==  ui->label_2->text().size()){
        for(int i = 0;i<receiveMsg.section('@',0,0).size()&&receiveMsg[i] == ui->label_2->text()[i];i++){
            if(i == receiveMsg.section('@',0,0).size()-1){
                flag = 1;
            }
        }
    }
    if(!flag){
        QString s1="<img width='30' height='30' src='qrc:/img/img/headimg1.jpg' style='float:left;margin-left:15px;margin-right:15px;'><div style='background:rgb(205,215,226);padding-top:8px;float:left;margin-top:10px;margin-right:45px;padding:10px;margin-left:20px;'>";
        s1+="<span style='font-size:15px;font-family:'Microsoft YaHei';margin-top:2px;'>"+receiveMsg.section('@',1,1)+"</span></div><br><br><br>";
        ui->textBrowser->insertHtml(s1);
    }
}
