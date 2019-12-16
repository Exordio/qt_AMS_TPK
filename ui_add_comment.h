/********************************************************************************
** Form generated from reading UI file 'add_comment.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COMMENT_H
#define UI_ADD_COMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Comment
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *CommentlineEdit;
    QDialogButtonBox *CommentButtonBox;

    void setupUi(QDialog *Add_Comment)
    {
        if (Add_Comment->objectName().isEmpty())
            Add_Comment->setObjectName(QStringLiteral("Add_Comment"));
        Add_Comment->resize(291, 82);
        layoutWidget = new QWidget(Add_Comment);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 271, 61));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        CommentlineEdit = new QLineEdit(layoutWidget);
        CommentlineEdit->setObjectName(QStringLiteral("CommentlineEdit"));

        gridLayout->addWidget(CommentlineEdit, 0, 0, 1, 1);

        CommentButtonBox = new QDialogButtonBox(layoutWidget);
        CommentButtonBox->setObjectName(QStringLiteral("CommentButtonBox"));
        CommentButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(CommentButtonBox, 1, 0, 1, 1);


        retranslateUi(Add_Comment);

        QMetaObject::connectSlotsByName(Add_Comment);
    } // setupUi

    void retranslateUi(QDialog *Add_Comment)
    {
        Add_Comment->setWindowTitle(QApplication::translate("Add_Comment", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Comment: public Ui_Add_Comment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COMMENT_H
