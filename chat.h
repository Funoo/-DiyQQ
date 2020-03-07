#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include<QMouseEvent>
#include<QtGui>
#include<QDebug>
#include<QScrollBar>
#include<QFile>
#include "emotion.h"
#include <QTcpSocket>
namespace Ui {
class Chat;
}


class chat : public QWidget
{
    Q_OBJECT
public:
    explicit chat(QWidget *parent = 0);
    ~chat();
    QString my_name;
    QPoint move_point; //移动距离
    bool mouse_press;
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    bool eventFilter(QObject *object, QEvent *e);  //最小化和关闭

protected:
    void showEvent(QShowEvent *event);

public slots:
    void resolveMessage(const QString data);

private slots:
    void sendemtion(QString s);
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void ClientRecvData();

private:
    Ui::Chat *ui;
    Emotion *emotion;
    //network
    QTcpSocket *mp_clientSocket;//7.16

};

#endif // CHAT_H
