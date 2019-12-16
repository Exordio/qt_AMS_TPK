/********************************************************************************
** Form generated from reading UI file 'openrecordclass.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENRECORDCLASS_H
#define UI_OPENRECORDCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_OpenRecordClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *OpenRecordClass)
    {
        if (OpenRecordClass->objectName().isEmpty())
            OpenRecordClass->setObjectName(QStringLiteral("OpenRecordClass"));
        OpenRecordClass->resize(416, 339);
        label = new QLabel(OpenRecordClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 67, 17));
        label_2 = new QLabel(OpenRecordClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 70, 67, 17));
        line = new QFrame(OpenRecordClass);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(40, 270, 331, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(OpenRecordClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 110, 67, 17));
        label_4 = new QLabel(OpenRecordClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 150, 67, 17));
        label_5 = new QLabel(OpenRecordClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 190, 67, 17));
        label_6 = new QLabel(OpenRecordClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 220, 67, 17));

        retranslateUi(OpenRecordClass);

        QMetaObject::connectSlotsByName(OpenRecordClass);
    } // setupUi

    void retranslateUi(QDialog *OpenRecordClass)
    {
        OpenRecordClass->setWindowTitle(QApplication::translate("OpenRecordClass", "Dialog", nullptr));
        label->setText(QApplication::translate("OpenRecordClass", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("OpenRecordClass", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("OpenRecordClass", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("OpenRecordClass", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("OpenRecordClass", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("OpenRecordClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenRecordClass: public Ui_OpenRecordClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENRECORDCLASS_H
