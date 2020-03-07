/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QFrame *line_2;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QStringLiteral("Chat"));
        Chat->resize(771, 668);
        widget = new QWidget(Chat);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 771, 671));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"  border-radius:3px;\n"
"  background:#E7EAF7;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 9, 61, 61));
        label->setStyleSheet(QLatin1String("border-image:url(\":/img/img/head.jpg\");\n"
"border-radius:2px;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 10, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label_2->setFont(font);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 40, 381, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_3->setFont(font1);
        label_3->setWordWrap(true);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(700, 0, 30, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"   color:rgb(134, 134, 134);\n"
"}\n"
"QLabel:hover{\n"
"   background-color:rgb(58,149,222);\n"
"   color:white;\n"
"\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(740, 0, 30, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"   color:rgb(134, 134, 134);;\n"
"}\n"
"QLabel:hover{\n"
"  background-color:rgb(212, 64, 39);\n"
"  color:rgb(255, 255, 255);\n"
"  border-top-right-radius:3px;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(610, 90, 161, 581));
        label_6->setStyleSheet(QLatin1String("border-image:url(\":img/img/right.jpg\");\n"
""));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 490, 26, 26));
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"background-image:url(\":/img/img/A26.png\");\n"
"}\n"
"QLabel:hover{\n"
"  border:1px solid rgb(203, 203, 203);\n"
"}"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 490, 26, 26));
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"background-image:url(\":/img/img/emotion26.png\");\n"
"}\n"
"QLabel:hover{\n"
" border:1px solid rgb(203, 203, 203);\n"
"}"));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 516, 601, 111));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(10);
        textEdit->setFont(font4);
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
"background:#E7EAF7;"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 630, 61, 24));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton{ \n"
"     background-color: rgb(6,157,213); \n"
"     border: none;\n"
"     border-radius:2px;\n"
"     color:white;\n"
"}\n"
"QPushButton:hover{ \n"
"     background-color: rgb(75,202,255);\n"
"}"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 630, 61, 24));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{ \n"
"     background-color: rgb(6,157,213); \n"
"     border: none;\n"
"     border-radius:2px;\n"
"     color:white;\n"
"}\n"
"QPushButton:hover{ \n"
"     background-color: rgb(75,202,255);\n"
"}"));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 90, 591, 401));
        textBrowser->setStyleSheet(QLatin1String("border:none;\n"
" background:#E7EAF7;"));
        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(-2, 70, 1221, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(6);
        line_2->setFont(font5);
        line_2->setStyleSheet(QLatin1String("height:2px;\n"
""));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Chat", "Tong", Q_NULLPTR));
        label_3->setText(QApplication::translate("Chat", "\344\273\212\345\244\251\346\230\257\344\270\252\345\245\275\346\227\245\345\255\220", Q_NULLPTR));
        label_4->setText(QApplication::translate("Chat", "\344\270\200", Q_NULLPTR));
        label_5->setText(QApplication::translate("Chat", "X", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        pushButton->setText(QApplication::translate("Chat", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Chat", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
