/********************************************************************************
** Form generated from reading UI file 'two.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWO_H
#define UI_TWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Two
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *Two)
    {
        if (Two->objectName().isEmpty())
            Two->setObjectName(QStringLiteral("Two"));
        Two->resize(251, 430);
        listWidget = new QListWidget(Two);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 251, 430));

        retranslateUi(Two);

        QMetaObject::connectSlotsByName(Two);
    } // setupUi

    void retranslateUi(QWidget *Two)
    {
        Two->setWindowTitle(QApplication::translate("Two", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Two: public Ui_Two {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWO_H
