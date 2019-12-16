#include "add_comment.h"
#include "ui_add_comment.h"

Add_Comment::Add_Comment(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Comment)
{
    ui->setupUi(this);

    setupModel();

    if(id == -1)
    {
        model->insertRow(model->rowCount(QModelIndex()));
        mapper->toLast();
    }
    else
    {
        for(int row = 0; row < model->rowCount(); ++row)
            if (model->data(model->index(row, 0)).toInt() == id)
                mapper->setCurrentModelIndex(model->index(row, 0));
    }




}

Add_Comment::~Add_Comment()
{
    delete ui;
}

void Add_Comment::setupModel()
{
    //Инициализация модели по аналогии с добавлением устройства
    model = new QSqlTableModel(this);
    model->setTable(DEVICE);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    //Инициализация маппера

    mapper = new QDataWidgetMapper();
    mapper->setModel(model);
    mapper->addMapping(ui->CommentlineEdit, 6);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    qDebug() << ui->CommentlineEdit->text();



}

void Add_Comment::on_CommentButtonBox_accepted()
{
    mapper->submit();
    model->submitAll();
    emit signalReady();
    this->close();

}

void Add_Comment::accept()
{
    qDebug() << ui->CommentlineEdit->text();
}

void Add_Comment::on_CommentButtonBox_rejected()
{
    close();
}
