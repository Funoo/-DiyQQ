/********************************************************************************
** Form generated from reading UI file 'one.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONE_H
#define UI_ONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_One
{
public:

    void setupUi(QWidget *One)
    {
        if (One->objectName().isEmpty())
            One->setObjectName(QStringLiteral("One"));
        One->resize(245, 305);

        retranslateUi(One);

        QMetaObject::connectSlotsByName(One);
    } // setupUi

    void retranslateUi(QWidget *One)
    {
        One->setWindowTitle(QApplication::translate("One", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class One: public Ui_One {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONE_H
