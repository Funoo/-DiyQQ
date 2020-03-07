#ifndef TALK_H
#define TALK_H


#include <QWidget>
#include<QLabel>
#include<QMovie>
#include<QMouseEvent>
#include<QDebug>
#include<QPropertyAnimation>
#include<QImage>
#include<QDesktopServices>
#include<QPainter>
#include<QRect>
#include "qmath.h"
#include<QStackedLayout>
#include<QDesktopWidget>
#include<QHideEvent>
#include<QSystemTrayIcon>
#include<QTimer>
#include <QJsonParseError>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include "one.h"
#include "two.h"
#include "drawer.h"
#include "drawer_2.h"
#include "search.h"
#include <QCloseEvent>
#include "chat.h"

namespace Ui {
class Talk;
}
class Drawer;
class Talk : public QWidget
{
    Q_OBJECT
public:
    explicit Talk(QWidget *parent = 0);
    ~Talk();
      Drawer* drwer;

    QPoint move_point;
    bool mouse_press;
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    bool eventFilter(QObject *object, QEvent *e);
    void hideEvent(QHideEvent *event);
    void init(QByteArray byte_array);

private:
    Ui::Talk *ui;
    int i;
    QStackedLayout *qstacklayout;
    QSystemTrayIcon *trayIcon;
    QTimer *showTimer;
    QTimer *showTimer2;
    int mDesktopHeight;
    int mDesktopHeight2;

    Two* two;

public slots:
    void iconActivate(QSystemTrayIcon::ActivationReason reason);
    void onMove();
    void onMove2();
    void resolveMessage(const QString data);
    void receiveSignMsg();


};

#endif // TALK_H
