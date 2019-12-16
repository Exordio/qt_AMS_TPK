#include "dialog_filter_device.h"
#include "ui_dialog_filter_device.h"

Dialog_filter_device::Dialog_filter_device(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_filter_device)
{
    ui->setupUi(this);



}

Dialog_filter_device::~Dialog_filter_device()
{
    delete ui;
}

void Dialog_filter_device::setupModel()
{
    model = new QSqlTableModel(this);
    model->setTable(DEVICE);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();


    
    
    
}

void Dialog_filter_device::on_pushButton_clicked()
{
    //QString z = ui->Search->text();
}
