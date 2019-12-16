#ifndef OPENRECORDCLASS_H
#define OPENRECORDCLASS_H

#include <QDialog>

namespace Ui {
class OpenRecordClass;
}

class OpenRecordClass : public QDialog
{
    Q_OBJECT

public:
    explicit OpenRecordClass(QWidget *parent = 0);
    ~OpenRecordClass();

private:
    Ui::OpenRecordClass *ui;
};

#endif // OPENRECORDCLASS_H
