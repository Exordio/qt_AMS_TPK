#include "openrecordclass.h"
#include "ui_openrecordclass.h"

OpenRecordClass::OpenRecordClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenRecordClass)
{
    ui->setupUi(this);
}

OpenRecordClass::~OpenRecordClass()
{
    delete ui;
}
