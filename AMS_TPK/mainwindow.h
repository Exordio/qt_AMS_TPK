#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QString>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include "database.h"
#include "dialogadddevice.h"
#include "add_comment.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_addDeviceButton_clicked();

    void slotUpdateModels();
    //void slotEditRecord(QModelIndex index);
    void slotEditRecord(QModelIndex index);

    void onSlotEditRecord();


    void slotAddCommentforRecord(QModelIndex index);
    void slotonAddCommentforRecord();

    void slotRemoveRecord();
    void slotCustomMenuRequested(QPoint pos);

    void slotOpenRecord();

    // Слоты для тулбара
    void on_Add_action_triggered();
    void on_Delete_action_triggered();
    void on_SearchButton_clicked();
    void on_ClearFilterButton_clicked();
    void on_SearchLine_returnPressed();





private:
    Ui::MainWindow              *ui;
    DataBase                    *db;
    QSqlTableModel              *modelDevice;
    QGraphicsScene              *Scene;

private:
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    void createGraphScene();
};

#endif // MAINWINDOW_H
