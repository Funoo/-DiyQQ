/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(400, 314);
        Form->setStyleSheet(QLatin1String("#Form{\n"
"  background:white;\n"
"}"));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 400, 145));
        label->setTextInteractionFlags(Qt::TextSelectableByMouse);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(337, 0, 30, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"   color:white;\n"
"}\n"
"QLabel:hover{\n"
"   background-color:rgb(255,255,255,50%);\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(367, 0, 30, 30));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String(":hover{\n"
"   background-color:red;\n"
"}\n"
"\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 170, 85, 85));
        label_4->setStyleSheet(QLatin1String("\n"
"background-color:green;"));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 175, 191, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit{\n"
"  border:1px solid rgb(219, 211, 222);\n"
"  border-radius:2px;\n"
"}\n"
"QLineEdit:focus{\n"
"  border:1px solid rgb(78, 125, 255);\n"
"  border-radius:2px;\n"
"}"));
        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 219, 191, 31));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit{\n"
"  border:1px solid rgb(219, 211, 222);\n"
"  border-radius:2px;\n"
"}\n"
"QLineEdit:focus{\n"
"  border:1px solid rgb(78, 125, 255);\n"
"  border-radius:2px;\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(Form);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 262, 54, 20));
        label_5->setFont(font);
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setMouseTracking(true);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setOpenExternalLinks(true);
        label_5->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 260, 191, 31));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"  background-color:rgb(231,0,132);\n"
"color:white;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"  background-color:rgb(231,0,132,70%);\n"
"}"));
        label_6 = new QLabel(Form);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(141, 290, 375, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("color:rgb(255, 0, 0);\n"
"background:rgb(255,255,255,50%);"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(Form);
        QObject::connect(lineEdit_2, SIGNAL(returnPressed()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Form", "\344\270\200", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form", "X", Q_NULLPTR));
        label_4->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Form", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\264\246\345\217\267", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Form", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("Form", "<html><head/><body><p><a href=\"https://www.baidu.com/\"><span style=\" text-decoration: underline; color:#0000ff;\">\346\263\250\345\206\214\350\264\246\345\217\267</span></a></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form", "\347\231\273\351\231\206", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
