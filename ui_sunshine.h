/********************************************************************************
** Form generated from reading UI file 'sunshine.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUNSHINE_H
#define UI_SUNSHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sunshine
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Sunshine)
    {
        if (Sunshine->objectName().isEmpty())
            Sunshine->setObjectName(QStringLiteral("Sunshine"));
        Sunshine->resize(270, 170);
        Sunshine->setStyleSheet(QLatin1String("#Sunshine{\n"
"  background:white;\n"
"}"));
        label = new QLabel(Sunshine);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 270, 120));
        label->setStyleSheet(QLatin1String("#label{\n"
"  border-image:url(\":/sunshine.jpg\");\n"
"}"));
        label_2 = new QLabel(Sunshine);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 0, 30, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"   color:rgb(134, 134, 134);;\n"
"}\n"
"QLabel:hover{\n"
"  background-color:rgb(212, 64, 39);\n"
"  color:rgb(255, 255, 255);\n"
"  border-top-right-radius:3px;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Sunshine);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 80, 131, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Sunshine);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 130, 261, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        retranslateUi(Sunshine);

        QMetaObject::connectSlotsByName(Sunshine);
    } // setupUi

    void retranslateUi(QWidget *Sunshine)
    {
        Sunshine->setWindowTitle(QApplication::translate("Sunshine", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Sunshine", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("Sunshine", "Good Moring ! ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Sunshine", "^o^\344\273\212\345\244\251\345\217\210\346\230\257\345\205\203\346\260\224\346\273\241\346\273\241\347\232\204\344\270\200\345\244\251\357\274\214fighting\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sunshine: public Ui_Sunshine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUNSHINE_H
