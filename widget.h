#ifndef WIDGET_H
#define WIDGET_H
#include "header.h"
#include <QWidget>
#include <QMainWindow>
#include <qmessagebox.h>
#include "talk.h"

class Talk;

namespace Ui {
class Widget;
}

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
     Talk *t;

private:
    QLayout* setWindowTitleBtn();
    QLayout* getHeadImg(QString src);
    QLayout* getLoginLayout();
    QLayout* getLoginBtn();
    QPixmap pixmapToRound(QPixmap &src, int radius);
    QPushButton *minBtn; //最小化按钮
    QPushButton *closeBtn; //关闭按钮
    QPushButton *LoginBtn; //登录按钮
    QPushButton *reguser; //注册按钮
    QPushButton *forgetpasw; //忘记密码按钮
    QPoint offset;
    bool ismove;
    bool isShowPsw;
    QLineEdit *username; //用户名输入框
    QLineEdit *password; //密码输入框



    //network
    QTcpSocket *tcpsocket;
    QString message;
    quint16 blockSize;  //存放文件大小
//    bool can_or_not_login;

private:
    void newConnect(); //连接服务器
    void displayError(QAbstractSocket::SocketError);  //显示错误

signals:
    void logSuccess();
    void data_read(const QString &data);

    //发送给所有界面自己的name
//    void send_name(QString);


protected:
    //重写mousePressEvent和mouseMoveEvent来允许鼠标移动程序
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private slots:
    void doNotMove();
    void ShowPassword();
    void on_LoginBtn_click();
    void on_reguserBtn_click();
    void readMessage();  //接收数据
};

#endif // WIDGET_H
