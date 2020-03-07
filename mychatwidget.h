#ifndef MYCHATWIDGET_H
#define MYCHATWIDGET_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Mychatwidget;
}

class Mychatwidget : public QLabel
{
    Q_OBJECT

public:
    explicit Mychatwidget(QLabel *parent = 0);
    ~Mychatwidget();

private:
    Ui::Mychatwidget *ui;
public slots:
    void changehight();
};

#endif // MYCHATWIDGET_H
