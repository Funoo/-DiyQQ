/********************************************************************************
** Form generated from reading UI file 'talk.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALK_H
#define UI_TALK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Talk
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QLabel *label_3;
    QLabel *label_6;
    QWidget *widget_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;

    void setupUi(QWidget *Talk)
    {
        if (Talk->objectName().isEmpty())
            Talk->setObjectName(QStringLiteral("Talk"));
        Talk->resize(260, 614);
        Talk->setLayoutDirection(Qt::LeftToRight);
        Talk->setAutoFillBackground(false);
        Talk->setStyleSheet(QLatin1String("\n"
"  background:url(':/img/img/bg.jpg');\n"
""));
        label = new QLabel(Talk);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(199, 3, 30, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"   color:rgb(134, 134, 134);\n"
"}\n"
"QLabel:hover{\n"
"   background-color:rgb(58,149,222);\n"
"   color:white;\n"
"\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Talk);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(229, 3, 30, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"   color:rgb(134, 134, 134);;\n"
"}\n"
"QLabel:hover{\n"
"  background-color:rgb(212, 64, 39);\n"
"  color:rgb(255, 255, 255);\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Talk);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-3, 33, 261, 801));
        widget->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 2, 55, 55));
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"   background-color:green;\n"
"  border-radius:4px;\n"
"  background-image:url(':/kobe_1.jpg');\n"
"\n"
"}\n"
"QLabel:hover{\n"
"   border:2px solid rgb(12, 255, 235);\n"
"}"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 4, 161, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_6->setFont(font1);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(12, 90, 241, 441));
        widget_2->setStyleSheet(QStringLiteral(""));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 530, 261, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"  background:url(':/img/img/QQwhite.png');\n"
"}\n"
"QLabel:hover{\n"
"  background:url(':/img/img/QQgreen.png');\n"
"}"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_9);

        label_10 = new QLabel(horizontalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"  background:url(':/img/img/contact_white.png');\n"
"}\n"
"QLabel:hover{\n"
"  background:url(':/img/img/contact_green.png');\n"
"}"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_10);

        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"  background:url(':/img/img/monments_white.png');\n"
"}\n"
"QLabel:hover{\n"
"  background:url(':/img/img/monments_green.png');\n"
"}"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_8);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(12, 60, 241, 25));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit{\n"
"  border:1px solid rgb(219, 211, 222);\n"
"  border-radius:2px;\n"
"}"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 30, 171, 21));
        lineEdit_2->setStyleSheet(QStringLiteral("background:url(':/img/img/bg.jpg');"));
        label_4 = new QLabel(Talk);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 3, 201, 30));
        label_4->setStyleSheet(QStringLiteral(""));

        retranslateUi(Talk);

        QMetaObject::connectSlotsByName(Talk);
    } // setupUi

    void retranslateUi(QWidget *Talk)
    {
        Talk->setWindowTitle(QApplication::translate("Talk", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Talk", "\344\270\200", Q_NULLPTR));
        label_2->setText(QApplication::translate("Talk", "X", Q_NULLPTR));
        label_3->setText(QString());
        label_6->setText(QApplication::translate("Talk", "Sy\344\270\266", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QString());
        label_8->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Talk: public Ui_Talk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALK_H
