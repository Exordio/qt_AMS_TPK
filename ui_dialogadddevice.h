/********************************************************************************
** Form generated from reading UI file 'dialogadddevice.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDDEVICE_H
#define UI_DIALOGADDDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddDevice
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *Device_Name;
    QLineEdit *Device_Type;
    QLineEdit *Dev_invent_number;
    QComboBox *Dev_location;
    QLineEdit *Dev_status;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAddDevice)
    {
        if (DialogAddDevice->objectName().isEmpty())
            DialogAddDevice->setObjectName(QStringLiteral("DialogAddDevice"));
        DialogAddDevice->resize(423, 311);
        layoutWidget = new QWidget(DialogAddDevice);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 391, 211));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Device_Name = new QLineEdit(layoutWidget);
        Device_Name->setObjectName(QStringLiteral("Device_Name"));

        verticalLayout->addWidget(Device_Name);

        Device_Type = new QLineEdit(layoutWidget);
        Device_Type->setObjectName(QStringLiteral("Device_Type"));

        verticalLayout->addWidget(Device_Type);

        Dev_invent_number = new QLineEdit(layoutWidget);
        Dev_invent_number->setObjectName(QStringLiteral("Dev_invent_number"));

        verticalLayout->addWidget(Dev_invent_number);

        Dev_location = new QComboBox(layoutWidget);
        Dev_location->addItem(QString());
        Dev_location->addItem(QString());
        Dev_location->setObjectName(QStringLiteral("Dev_location"));

        verticalLayout->addWidget(Dev_location);

        Dev_status = new QLineEdit(layoutWidget);
        Dev_status->setObjectName(QStringLiteral("Dev_status"));

        verticalLayout->addWidget(Dev_status);


        horizontalLayout_2->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(DialogAddDevice);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 230, 381, 62));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        previousButton = new QPushButton(layoutWidget1);
        previousButton->setObjectName(QStringLiteral("previousButton"));

        horizontalLayout->addWidget(previousButton);

        nextButton = new QPushButton(layoutWidget1);
        nextButton->setObjectName(QStringLiteral("nextButton"));

        horizontalLayout->addWidget(nextButton);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(layoutWidget1);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DialogAddDevice);
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAddDevice, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAddDevice, SLOT(accept()));

        QMetaObject::connectSlotsByName(DialogAddDevice);
    } // setupUi

    void retranslateUi(QDialog *DialogAddDevice)
    {
        DialogAddDevice->setWindowTitle(QApplication::translate("DialogAddDevice", "Dialog", nullptr));
        label->setText(QApplication::translate("DialogAddDevice", "\320\235\320\260\320\267\320\262. \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        label_2->setText(QApplication::translate("DialogAddDevice", "\320\242\320\270\320\277 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        label_3->setText(QApplication::translate("DialogAddDevice", "\320\230\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_4->setText(QApplication::translate("DialogAddDevice", "\320\234\320\265\321\201\321\202\320\276\320\275\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265", nullptr));
        label_5->setText(QApplication::translate("DialogAddDevice", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        Dev_location->setItemText(0, QApplication::translate("DialogAddDevice", "\320\232\320\260\320\261 304", nullptr));
        Dev_location->setItemText(1, QApplication::translate("DialogAddDevice", "\320\232\320\260\320\261 305", nullptr));

        previousButton->setText(QApplication::translate("DialogAddDevice", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271", nullptr));
        nextButton->setText(QApplication::translate("DialogAddDevice", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddDevice: public Ui_DialogAddDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDDEVICE_H
