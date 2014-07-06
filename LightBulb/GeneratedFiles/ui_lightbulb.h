/********************************************************************************
** Form generated from reading UI file 'lightbulb.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTBULB_H
#define UI_LIGHTBULB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightBulbClass
{
public:

    void setupUi(QWidget *LightBulbClass)
    {
        if (LightBulbClass->objectName().isEmpty())
            LightBulbClass->setObjectName(QStringLiteral("LightBulbClass"));
        LightBulbClass->resize(600, 400);

        retranslateUi(LightBulbClass);

        QMetaObject::connectSlotsByName(LightBulbClass);
    } // setupUi

    void retranslateUi(QWidget *LightBulbClass)
    {
        LightBulbClass->setWindowTitle(QApplication::translate("LightBulbClass", "LightBulb", 0));
    } // retranslateUi

};

namespace Ui {
    class LightBulbClass: public Ui_LightBulbClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTBULB_H
