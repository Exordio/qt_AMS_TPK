/********************************************************************************
** Form generated from reading UI file 'unlock_animation.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNLOCK_ANIMATION_H
#define UI_UNLOCK_ANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Unlock_Animation
{
public:
    QLabel *label;

    void setupUi(QDialog *Unlock_Animation)
    {
        if (Unlock_Animation->objectName().isEmpty())
            Unlock_Animation->setObjectName(QStringLiteral("Unlock_Animation"));
        Unlock_Animation->resize(401, 399);
        label = new QLabel(Unlock_Animation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-220, -40, 671, 471));

        retranslateUi(Unlock_Animation);

        QMetaObject::connectSlotsByName(Unlock_Animation);
    } // setupUi

    void retranslateUi(QDialog *Unlock_Animation)
    {
        Unlock_Animation->setWindowTitle(QApplication::translate("Unlock_Animation", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Unlock_Animation: public Ui_Unlock_Animation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNLOCK_ANIMATION_H
