/********************************************************************************
** Form generated from reading UI file 'mylistwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLISTWIDGET_H
#define UI_MYLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mylistwidget
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Mylistwidget)
    {
        if (Mylistwidget->objectName().isEmpty())
            Mylistwidget->setObjectName(QStringLiteral("Mylistwidget"));
        Mylistwidget->resize(297, 62);
        Mylistwidget->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(Mylistwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 42, 42));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"  border-image:url(\":/img/img/ddhead.jpg\");\n"
"  border-radius:2px;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Mylistwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(65, 8, 141, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("QLabel {background-color: transparent;}"));
        label_4 = new QLabel(Mylistwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(65, 33, 211, 17));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("QLabel {background-color: transparent;}"));

        retranslateUi(Mylistwidget);

        QMetaObject::connectSlotsByName(Mylistwidget);
    } // setupUi

    void retranslateUi(QWidget *Mylistwidget)
    {
        Mylistwidget->setWindowTitle(QApplication::translate("Mylistwidget", "Form", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Mylistwidget", "Jerry", Q_NULLPTR));
        label_4->setText(QApplication::translate("Mylistwidget", "Where is Tom?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mylistwidget: public Ui_Mylistwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLISTWIDGET_H
