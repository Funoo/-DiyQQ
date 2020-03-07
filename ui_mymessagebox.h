/********************************************************************************
** Form generated from reading UI file 'mymessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGEBOX_H
#define UI_MYMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mymessagebox
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;

    void setupUi(QWidget *Mymessagebox)
    {
        if (Mymessagebox->objectName().isEmpty())
            Mymessagebox->setObjectName(QStringLiteral("Mymessagebox"));
        Mymessagebox->resize(260, 100);
        widget = new QWidget(Mymessagebox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 260, 100));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"background:white;\n"
"border-radius:3px;\n"
"border:1px solid rgb(113,113,113);\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(4, 4, 171, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(236, 0, 24, 24));
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
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(1, 25, 258, 71));
        listWidget->setStyleSheet(QStringLiteral("border:none;"));

        retranslateUi(Mymessagebox);

        QMetaObject::connectSlotsByName(Mymessagebox);
    } // setupUi

    void retranslateUi(QWidget *Mymessagebox)
    {
        Mymessagebox->setWindowTitle(QApplication::translate("Mymessagebox", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Mymessagebox", "  Fun\346\224\266\345\210\260\347\232\204\346\266\210\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("Mymessagebox", "X", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mymessagebox: public Ui_Mymessagebox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGEBOX_H
