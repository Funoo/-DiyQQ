#include "mylistwidget.h"
#include "ui_mylistwidget.h"
#include "chat.h"


Mylistwidget::Mylistwidget(QLabel *parent) :QLabel(parent),

    ui(new Ui::Mylistwidget)
{
    ui->setupUi(this);
//    ui->pushButton->setFlat(true);
}

Mylistwidget::~Mylistwidget()
{
    delete ui;
}
void Mylistwidget::init(QString username,QString sign)
{
    ui->label_3->setStyleSheet("QLabel {background-color: white;}");
    ui->label_3->setText(username);
    ui->label_4->setStyleSheet("QLabel {background-color: transparent;}");
    ui->label_4->setText(sign);

}

//some change name


