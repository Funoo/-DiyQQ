#include "mychatwidget.h"
#include "ui_mychatwidget.h"

Mychatwidget::Mychatwidget(QLabel *parent) :
    QLabel(parent),
    ui(new Ui::Mychatwidget)
{
    ui->setupUi(this);
}

Mychatwidget::~Mychatwidget()
{
    delete ui;
}
void Mychatwidget::changehight()
{
    ui->label->resize(50,50);
}
