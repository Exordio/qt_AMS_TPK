#ifndef ADD_COMMENT_H
#define ADD_COMMENT_H

#include <QDialog>
#include <QSqlTableModel>
#include <QDataWidgetMapper>
#include <QMessageBox>

#include "database.h"

namespace Ui {
class Add_Comment;
}

class Add_Comment : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Comment(int row = -1, QWidget *parent = 0);
    ~Add_Comment();

signals:
    void signalReady();

private slots:

    void on_CommentButtonBox_accepted();

    void on_CommentButtonBox_rejected();

private:
    Ui::Add_Comment         *ui;
    QSqlTableModel          *model;
    QDataWidgetMapper       *mapper;
private:
    void setupModel();
    void createUI();
    void accept();

};

#endif // ADD_COMMENT_H
