#include "database.h"

DataBase::DataBase(QObject *parent) : QObject(parent)
{

}

DataBase::~DataBase()
{

}

/* Методы для подключения к базе данных
 * */
void DataBase::connectToDataBase()
{
    /* Перед подключением к базе данных производим проверку на её существование.
     * В зависимости от результата производим открытие базы данных или её восстановление
     * */
    if(!QFile("E:/KOURSE/DataBase.db" DATABASE_NAME).exists()){ //C:/example/ /home/sandborn/
        this->restoreDataBase();
    } else {
        this->openDataBase();
    }
}

void DataBase::connectToDataBasePasswd()
{
    //Коннект к криптованой базе данных
    if(!QFile("..." DATABASE_PASSWD_NAME).exists())
    {
        this->restoreDataBase();
    }
    else
    {
        this->openDataBase();
    }
}

/* Методы восстановления базы данных
 * */
bool DataBase::restoreDataBase()
{
    if(this->openDataBase()){
        if(!this->createDeviceTable()){
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не удалось восстановить базу данных";
        return false;
    }
    return false;
}



/* Метод для открытия базы данных
 * */
bool DataBase::openDataBase()
{
    /* База данных открывается по заданному пути
     * и имени базы данных, если она существует
     * */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName("E:/KOURSE/DataBase.db" DATABASE_NAME); // /home/sandborn/ on Mac  /Users/volfram77/Desktop/plsHelpMe/
    if(db.open()){
        return true;
    } else {
        return false;
    }
}

bool DataBase::openPasswdDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_PASSWD_HOSTNAME);
    db.setDatabaseName("..." DATABASE_PASSWD_NAME);
    if(db.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}


/* Методы закрытия базы данных
 * */
void DataBase::closeDataBase()
{
    db.close();
}

/* Метод для создания таблицы устройств в базе данных
 * */
bool DataBase::createDeviceTable()
{
    /* В данном случае используется формирование сырого SQL-запроса
     * с последующим его выполнением.
     * */
    QSqlQuery query;
    if(!query.exec( "CREATE TABLE " DEVICE" ("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                            DEVICE_NAME  "                  TEXT     NOT NULL, "
                            DEVICE_TYPE        "            TEXT     NOT NULL, "
                            DEVICE_INVENTORY_NUMBER       " TEXT     NOT NULL, "
                            DEVICE_LOCATION "               TEXT     NOT NULL, "
                            DEVICE_STATUS "                 TEXT     NOT NULL, "
                            DEVICE_COMMENT "                TEXT"
                        " )"
                    )){
        qDebug() << "DataBase: error of create " << DEVICE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}




/* Метод для вставки записи в таблицу устройств
 * */
bool DataBase::inserIntoDeviceTable(const QVariantList &data)
{
    /* Запрос SQL формируется из QVariantList,
     * в который передаются данные для вставки в таблицу.
     * */
    QSqlQuery query;
    /* В начале SQL запрос формируется с ключами,
     * которые потом связываются методом bindValue
     * для подстановки данных из QVariantList
     * */
    query.prepare("INSERT INTO " DEVICE " ( " DEVICE_NAME ", "
                                              DEVICE_TYPE ", "
                                              DEVICE_INVENTORY_NUMBER ", "
                                              DEVICE_LOCATION ", "
                                              DEVICE_STATUS ", "
                                              DEVICE_COMMENT " ) "
                  "VALUES (:Device_name, :Device_type, :Device_inventory_number, :Device_location, :Device_status, :Device_comment )");
    query.bindValue(":Device_name",    data[0].toString());
    query.bindValue(":Device_type",          data[1].toString());
    query.bindValue(":Device_inventory_number",         data[2].toString());
    query.bindValue(":Device_location", data[3].toString());
    query.bindValue(":Device_status", data[4].toString());
    query.bindValue(":Device_comment", data[5].toString());



    // После чего выполняется запросом методом exec()
    if(!query.exec()){
        qDebug() << "error insert into " << DEVICE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}


