/********************************************************************************
** Form generated from reading UI file 'mychatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCHATWIDGET_H
#define UI_MYCHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mychatwidget
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Mychatwidget)
    {
        if (Mychatwidget->objectName().isEmpty())
            Mychatwidget->setObjectName(QStringLiteral("Mychatwidget"));
        Mychatwidget->resize(251, 35);
        label = new QLabel(Mychatwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 5, 25, 25));
        label->setStyleSheet(QLatin1String("border-image:url(\":/img/img/school.jpg\");\n"
"border-radius:1px;"));
        label_2 = new QLabel(Mychatwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 5, 161, 21));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("font: 10pt \"Adobe Devanagari\";"));

        retranslateUi(Mychatwidget);

        QMetaObject::connectSlotsByName(Mychatwidget);
    } // setupUi

    void retranslateUi(QWidget *Mychatwidget)
    {
        Mychatwidget->setWindowTitle(QApplication::translate("Mychatwidget", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Mychatwidget", "\346\210\221\347\210\261\344\270\255\345\215\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mychatwidget: public Ui_Mychatwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCHATWIDGET_H
