#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H


#include <QWidget>
#include <QLabel>
#include<QTcpSocket>

namespace Ui {
class Mylistwidget;
}

class Mylistwidget : public QLabel
{
    Q_OBJECT

public:
    explicit Mylistwidget(QLabel *parent = 0);
    ~Mylistwidget();
    void init(QString name,QString sign);

private:
    Ui::Mylistwidget *ui;

};

#endif // MYLISTWIDGET_H
