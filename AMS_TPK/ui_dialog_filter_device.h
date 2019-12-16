/********************************************************************************
** Form generated from reading UI file 'dialog_filter_device.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FILTER_DEVICE_H
#define UI_DIALOG_FILTER_DEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_filter_device
{
public:
    QPushButton *pushButton;
    QLineEdit *Search;

    void setupUi(QDialog *Dialog_filter_device)
    {
        if (Dialog_filter_device->objectName().isEmpty())
            Dialog_filter_device->setObjectName(QStringLiteral("Dialog_filter_device"));
        Dialog_filter_device->resize(400, 300);
        pushButton = new QPushButton(Dialog_filter_device);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 200, 80, 21));
        Search = new QLineEdit(Dialog_filter_device);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(102, 100, 151, 21));

        retranslateUi(Dialog_filter_device);

        QMetaObject::connectSlotsByName(Dialog_filter_device);
    } // setupUi

    void retranslateUi(QDialog *Dialog_filter_device)
    {
        Dialog_filter_device->setWindowTitle(QApplication::translate("Dialog_filter_device", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog_filter_device", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_filter_device: public Ui_Dialog_filter_device {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FILTER_DEVICE_H
