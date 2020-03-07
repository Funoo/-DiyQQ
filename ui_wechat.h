/********************************************************************************
** Form generated from reading UI file 'wechat.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WECHAT_H
#define UI_WECHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wechat
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QListWidget *listWidget;
    QLabel *label_5;
    QListWidget *listWidget_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Wechat)
    {
        if (Wechat->objectName().isEmpty())
            Wechat->setObjectName(QStringLiteral("Wechat"));
        Wechat->resize(720, 642);
        widget = new QWidget(Wechat);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 721, 641));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        widget->setFont(font);
        widget->setStyleSheet(QLatin1String("#widget{\n"
"  border-radius:3px;\n"
"  background:rgb(244,240,234);\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 9, 50, 50));
        label->setStyleSheet(QLatin1String("border-image:url(\":/img/img/school.jpg\");\n"
"border-radius:4px;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(660, 0, 30, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"   color:rgb(134, 134, 134);\n"
"}\n"
"QLabel:hover{\n"
"   background-color:rgb(58,149,222);\n"
"   color:white;\n"
"\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(690, 0, 30, 30));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"   color:rgb(134, 134, 134);;\n"
"}\n"
"QLabel:hover{\n"
"  background-color:rgb(212, 64, 39);\n"
"  color:rgb(255, 255, 255);\n"
"  border-top-right-radius:3px;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 65, 629, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 66, 561, 381));
        textBrowser->setStyleSheet(QLatin1String("border:none;\n"
"background:rgb(244,240,234);"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(570, 70, 149, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("background:rgb(237, 226, 216)"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(570, 100, 149, 221));
        listWidget->setStyleSheet(QLatin1String("border:none;\n"
"background:rgb(244,240,234);"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(570, 330, 149, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("background:rgb(237, 226, 216);"));
        listWidget_2 = new QListWidget(widget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(570, 360, 149, 281));
        listWidget_2->setStyleSheet(QLatin1String("border:none;\n"
"background:rgb(244,240,234);"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 10, 401, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        label_6->setFont(font2);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 40, 401, 16));
        label_7->setFont(font);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 440, 26, 26));
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"background-image:url(\":/img/img/A26_2.png\");\n"
"}\n"
"QLabel:hover{\n"
"  border:1px solid rgb(203, 203, 203);\n"
"}"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(36, 439, 26, 26));
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"background-image:url(\":/img/img/emotion26_2.png\");\n"
"}\n"
"QLabel:hover{\n"
" border:1px solid rgb(203, 203, 203);\n"
"}"));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 466, 581, 121));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
" background:rgb(244,240,234);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 600, 61, 24));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton{ \n"
"     background-color: rgb(214,177,159); \n"
"     border: none;\n"
"     border-radius:2px;\n"
"     color:white;\n"
"}\n"
"QPushButton:hover{ \n"
"     background-color: rgb(241,145,88);\n"
"}"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 600, 61, 24));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{ \n"
"     background-color: rgb(214,177,159); \n"
"     border: none;\n"
"     border-radius:2px;\n"
"     color:white;\n"
"}\n"
"QPushButton:hover{ \n"
"     background-color: rgb(241,145,88);\n"
"}"));

        retranslateUi(Wechat);

        QMetaObject::connectSlotsByName(Wechat);
    } // setupUi

    void retranslateUi(QWidget *Wechat)
    {
        Wechat->setWindowTitle(QApplication::translate("Wechat", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Wechat", "\344\270\200", Q_NULLPTR));
        label_3->setText(QApplication::translate("Wechat", "X", Q_NULLPTR));
        label_4->setText(QApplication::translate("Wechat", " \347\276\244\351\200\232\347\237\245", Q_NULLPTR));
        label_5->setText(QApplication::translate("Wechat", "  \347\276\244\346\210\220\345\221\230(0/70)", Q_NULLPTR));
        label_6->setText(QApplication::translate("Wechat", "\344\270\223\344\270\232\346\260\264\347\276\244", Q_NULLPTR));
        label_7->setText(QApplication::translate("Wechat", "\346\254\242\350\277\216\345\220\204\344\275\215\345\220\214\345\255\246\346\260\264\347\276\244", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QString());
        pushButton->setText(QApplication::translate("Wechat", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Wechat", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Wechat: public Ui_Wechat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WECHAT_H
