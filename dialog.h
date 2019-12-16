#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPixmap>
#include <QPushButton>
#include <unlock_animation.h>
#include <QTimer>
#include <QThread>
#include <QMouseEvent>
#include <QMessageBox>
#include "database.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    int dx;
    int dy;
protected:
    void mouseMoveEvent( QMouseEvent* e );
    void mousePressEvent( QMouseEvent* e );
    void mouseReleaseEvent( QMouseEvent* e );
private slots:
    void change();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

    void on_quitButton_clicked();
};

#endif // DIALOG_H
