/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Add_action;
    QAction *Delete_action;
    QAction *Find_action;
    QAction *actionExit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *deviceTableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *FilterComboBox;
    QLineEdit *SearchLine;
    QPushButton *SearchButton;
    QPushButton *ClearFilterButton;
    QWidget *tab_2;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuRefind;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1366, 768);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/Database-Encryption.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        Add_action = new QAction(MainWindow);
        Add_action->setObjectName(QStringLiteral("Add_action"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/add-server-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Add_action->setIcon(icon1);
        Delete_action = new QAction(MainWindow);
        Delete_action->setObjectName(QStringLiteral("Delete_action"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/remove-server-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Delete_action->setIcon(icon2);
        Find_action = new QAction(MainWindow);
        Find_action->setObjectName(QStringLiteral("Find_action"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/search-server-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Find_action->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1361, 681));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        deviceTableView = new QTableView(tab);
        deviceTableView->setObjectName(QStringLiteral("deviceTableView"));
        deviceTableView->setGeometry(QRect(10, 40, 1341, 641));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(400, 0, 951, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        FilterComboBox = new QComboBox(layoutWidget);
        FilterComboBox->addItem(QString());
        FilterComboBox->addItem(QString());
        FilterComboBox->addItem(QString());
        FilterComboBox->addItem(QString());
        FilterComboBox->addItem(QString());
        FilterComboBox->setObjectName(QStringLiteral("FilterComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilterComboBox->sizePolicy().hasHeightForWidth());
        FilterComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(FilterComboBox, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        SearchLine = new QLineEdit(layoutWidget);
        SearchLine->setObjectName(QStringLiteral("SearchLine"));
        sizePolicy.setHeightForWidth(SearchLine->sizePolicy().hasHeightForWidth());
        SearchLine->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(SearchLine);

        SearchButton = new QPushButton(layoutWidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));

        horizontalLayout->addWidget(SearchButton);

        ClearFilterButton = new QPushButton(layoutWidget);
        ClearFilterButton->setObjectName(QStringLiteral("ClearFilterButton"));

        horizontalLayout->addWidget(ClearFilterButton);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        graphicsView = new QGraphicsView(tab_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 30, 1341, 621));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1366, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuRefind = new QMenu(menuBar);
        menuRefind->setObjectName(QStringLiteral("menuRefind"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::TopToolBarArea);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuRefind->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(Add_action);
        menuFile->addAction(Delete_action);
        menuFile->addAction(Find_action);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        mainToolBar->addAction(Add_action);
        mainToolBar->addAction(Delete_action);
        mainToolBar->addAction(Find_action);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Add_action->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
        Delete_action->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
        Find_action->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\320\260\321\206\320\270\321\217 \320\277\320\276 :", nullptr));
        FilterComboBox->setItemText(0, QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        FilterComboBox->setItemText(1, QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        FilterComboBox->setItemText(2, QApplication::translate("MainWindow", "\320\230\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        FilterComboBox->setItemText(3, QApplication::translate("MainWindow", "\320\234\320\265\321\201\321\202\320\276\320\275\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265", nullptr));
        FilterComboBox->setItemText(4, QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));

        SearchButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        ClearFilterButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\244\320\270\320\273\321\214\321\202\321\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\237\320\273\320\260\320\275 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuRefind->setTitle(QApplication::translate("MainWindow", "Refind", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
