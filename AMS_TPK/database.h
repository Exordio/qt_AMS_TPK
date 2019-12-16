#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>

/* Директивы имен таблицы, полей таблицы и базы данных */
#define DATABASE_HOSTNAME   "ExampleDataBase"
#define DATABASE_NAME       "DataBase.db"
#define DATABASE_PASSWD_HOSTNAME "PasswdExampleDatabase"
#define DATABASE_PASSWD_NAME     "DataBase.db"


#define DEVICE                      "DeviceTable"
#define DEVICE_NAME                 "Device_name"
#define DEVICE_TYPE                 "Device_type"
#define DEVICE_INVENTORY_NUMBER     "Device_inventory_number"
#define DEVICE_LOCATION             "Device_location"
#define DEVICE_STATUS               "Device_status"
#define DEVICE_COMMENT              "Device_comment"


class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = 0);
    ~DataBase();
    /* Методы для непосредственной работы с классом
     * Подключение к базе данных и вставка записей в таблицу
     * */
    void connectToDataBase();
    void connectToDataBasePasswd();
    bool inserIntoDeviceTable(const QVariantList &data);

private:
    // Сам объект базы данных, с которым будет производиться работа
    QSqlDatabase    db;

private:
    /* Внутренние методы для работы с базой данных
     * */
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createDeviceTable();

    bool openPasswdDataBase();

};

#endif // DATABASE_H
