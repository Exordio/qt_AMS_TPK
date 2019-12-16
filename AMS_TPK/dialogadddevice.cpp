#include "dialogadddevice.h"
#include "ui_dialogadddevice.h"
#include <QDebug>

DialogAddDevice::DialogAddDevice(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddDevice)
{
    ui->setupUi(this);


    setupModel();


    if(id == -1)
    {
        model->insertRow(model->rowCount(QModelIndex()));
        mapper->toLast();
    /* В противном случае диалог настраивается на заданную запись
     * */
    }
    else {
        for(int row = 0; row < model->rowCount(); ++row)
            if (model->data(model->index(row, 0)).toInt() == id)
                mapper->setCurrentModelIndex(model->index(row, 0));

    }

    createUI();
}

DialogAddDevice::~DialogAddDevice()
{
    delete ui;
}

/* Метод настройки модели данных и mapper
 * */
void DialogAddDevice::setupModel()
{
    /* Инициализируем модель и делаем выборку из неё
     * */
    model = new QSqlTableModel(this);
    model->setTable(DEVICE);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    /* Инициализируем mapper и привязываем
     * поля данных к объектам LineEdit
     * */
    mapper = new QDataWidgetMapper();
    mapper->setModel(model);
    mapper->addMapping(ui->Device_Name, 1);
    mapper->addMapping(ui->Device_Type, 2);
    mapper->addMapping(ui->Dev_invent_number, 3);
    mapper->addMapping(ui->Dev_location, 4);
    mapper->addMapping(ui->Dev_status, 5);


    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    qDebug() << ui->Device_Name->text();

    connect(ui->previousButton, SIGNAL(clicked()), mapper, SLOT(toPrevious()));
    connect(ui->nextButton, SIGNAL(clicked()), mapper, SLOT(toNext()));
    /* При изменении индекса в mapper изменяем состояние кнопок
     * */
    connect(mapper, SIGNAL(currentIndexChanged(int)), this, SLOT(updateButtons(int)));
}

void DialogAddDevice::createUI()
{
    //Настраивал тут регулярное выр. доделать если понадобится.

    /*QRegExp Name_Range("[a-zA-Z0-9]{20}");
    ui->Device_Name->setValidator(new QRegExpValidator (Name_Range,this));
*/

    /*
    QString macRange = "(?:[0-9A-Fa-f][0-9A-Fa-f])";
    QRegExp macRegex ("^" + macRange
                      + "\\:" + macRange
                      + "\\:" + macRange
                      + "\\:" + macRange
                      + "\\:" + macRange
                      + "\\:" + macRange + "$");
    QRegExpValidator *macValidator = new QRegExpValidator(macRegex, this);
    ui->Device_Type->setValidator(macValidator);
    */

    //Автозаполнение

    //QSqlQueryModel *modelCompleter = new QSqlQueryModel(this);
    //modelCompleter->setQuery("SELECT " DEVICE_TYPE " FROM " DEVICE, ;

    QStringList CompleterListTypes, CompleterListStatus;
    CompleterListTypes << "System block" << "Monitor" << "Projector" << "Keyboard" << "Mouse"
                       << "Системный блок" << "Монитор" << "Клавиатура" << "Мышь";
    CompleterListStatus << "Работает" << "В ремонте" << "Сломан";
    QCompleter *Completer = new QCompleter(CompleterListTypes);
    QCompleter *Completer2 = new QCompleter(CompleterListStatus);


    Completer->setCaseSensitivity(Qt::CaseInsensitive);
    Completer2->setCaseSensitivity(Qt::CaseInsensitive);
    ui->Device_Type->setCompleter(Completer);
    ui->Dev_status->setCompleter(Completer2);
}

void DialogAddDevice::on_buttonBox_accepted()
{

    QSqlQuery query;
    QString str = QString("SELECT EXISTS (SELECT " DEVICE_NAME " FROM " DEVICE
                          /*" WHERE ( " DEVICE_NAME " = '%1' "*/" WHERE " DEVICE_INVENTORY_NUMBER " = '%1' "
                          " AND id NOT LIKE '%2' )")
            .arg(/*ui->Device_Name->text(),*/
                 ui->Dev_invent_number->text(),
                 model->data(model->index(mapper->currentIndex(),0), Qt::DisplayRole).toString());

    query.prepare(str);
    query.exec();
    query.next();


    if(query.value(0) != 0){
        QMessageBox::information(this, trUtf8("Ошибка добавления"),
                                 trUtf8("В базе уже присутствует устройство с таким серийным номером"));

    } else {
        mapper->submit();
        model->submitAll();
        emit signalReady();
        this->close();
    }
}

void DialogAddDevice::accept()
{
qDebug() << ui->Device_Name->text();
}


void DialogAddDevice::updateButtons(int row)
{

    ui->previousButton->setEnabled(row > 0);
    ui->nextButton->setEnabled(row < model->rowCount() - 1);
}
