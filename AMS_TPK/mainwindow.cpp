#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Melon Corp. TPK Ver. 0.8");
    /* Первым делом необходимо создать объект для работы с базой данных
     * и инициализировать подключение к базе данных
     * */

    db = new DataBase();
    db->connectToDataBase();
    /* Инициализируем модели для представления данных
     * с заданием названий колонок
     * */
    this->setupModel(DEVICE,
                     QStringList() << trUtf8("id")
                                         << trUtf8("Название устройства")
                                         << trUtf8("Тип устройства")
                                         << trUtf8("Инвентарный номер")
                                         << trUtf8("Местонахождение")
                                         << trUtf8("Статус устройства")
                                         << trUtf8("Примечание")
               );
    /* Инициализируем внешний вид таблицы с данными
     * */
    this->createUI();

    this->createGraphScene();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupModel(const QString &tableName, const QStringList &headers)
{
    /* Производим инициализацию модели представления данных
     * */
    modelDevice = new QSqlTableModel(this);
    modelDevice->setTable(tableName);
    modelDevice->select();
    /* Устанавливаем названия колонок в таблице с сортировкой данных
     * */
    for(int i = 0, j = 0; i < modelDevice->columnCount(); i++, j++){
        modelDevice->setHeaderData(i,Qt::Horizontal,headers[j]);
    }

}

void MainWindow::createUI() //Настройка UI элементов
{
    ui->deviceTableView->setModel(modelDevice);     // Устанавливаем модель на TableView
    ui->deviceTableView->setColumnHidden(0, true);    // Скрываем колонку с id записей
    // Разрешаем выделение строк
    ui->deviceTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Устанавливаем режим выделения лишь одно строки в таблице
    ui->deviceTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // Устанавливаем размер колонок по содержимому ( Баг в последнем столбце, выставление вручную)
    //ui->deviceTableView->resizeColumnsToContents();
    ui->deviceTableView->horizontalHeader()->resizeSection(1,190);
    ui->deviceTableView->horizontalHeader()->resizeSection(2,200);
    ui->deviceTableView->horizontalHeader()->resizeSection(3,250);
    ui->deviceTableView->horizontalHeader()->resizeSection(4,150);
    ui->deviceTableView->horizontalHeader()->resizeSection(5,150);
    ui->deviceTableView->horizontalHeader()->resizeSection(6,150);
    


    ui->deviceTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->deviceTableView->horizontalHeader()->setStretchLastSection(true);
    ui->deviceTableView->setSortingEnabled(true);
    // Установка контекстного меню на пкм по записи
    ui->deviceTableView->setContextMenuPolicy(Qt::CustomContextMenu);
    //ui->tabWidget->setTabText(1,"Таблица устройств"); - Перенёс в дизайнер
    // Коннект к слоту изменения записи
    connect(ui->deviceTableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(slotEditRecord(QModelIndex)));
    // Коннект к слоту вызова контекстного меню
    connect(ui->deviceTableView, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(slotCustomMenuRequested(QPoint)));
}
void MainWindow::createGraphScene()
{


    Scene = new QGraphicsScene;
    Scene->addPixmap(QPixmap(":/images/images/MapMap.png"));
    ui->graphicsView->setScene(Scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    Scene->setSceneRect(10,10,0,0);

    QGraphicsPixmapItem *item = new QGraphicsPixmapItem;
    QPixmap x(":/images/images/7lrXjrS.png");
    item->setPixmap(x);
    item->setToolTip("Название устройства : ATL299932\nТип устройства : Monitor\nИнвентарный номер : 197773231\nСтатус : Работает\n");

    item->setFlags(QGraphicsItem::ItemIsMovable|QGraphicsItem::ItemIsSelectable);

    Scene->addItem(item);

    /*QGraphicsPixmapItem *item2 = new QGraphicsPixmapItem;
    QPixmap x1(":/images/images/7lrXjrS.png");
    item2->setPixmap(x);

    item2->setFlags(QGraphicsItem::ItemIsMovable|QGraphicsItem::ItemIsSelectable);

    Scene->addItem(item2);

    QGraphicsPixmapItem *item3 = new QGraphicsPixmapItem;
    QPixmap x2(":/images/images/7lrXjrS.png");
    item3->setPixmap(x);

    item3->setFlags(QGraphicsItem::ItemIsMovable|QGraphicsItem::ItemIsSelectable);

    Scene->addItem(item3);
*/
    ui->graphicsView->show();



}

void MainWindow::slotCustomMenuRequested(QPoint pos) // Контекстное меню
{
    // Создание объекта контектсной менюшки
    QMenu *menu = new QMenu(this);
    // Создание действий через QAction
    QAction *editDevice = new QAction(trUtf8("Редактировать"), this);
    QAction *deleteDevice = new QAction(trUtf8("Удалить"), this);
    QAction *addComment = new QAction(trUtf8("Добавить примечание"), this);
    QAction *toPlan = new QAction(trUtf8("Вывести на план"), this);
    QAction *showInPlan = new QAction(trUtf8("Показать на плане"),this);
    QAction *delFromPlan = new QAction(trUtf8("Удалить с плана"), this);


    // Подключение слоты обработки действий контектсного меню

    connect(editDevice, SIGNAL(triggered()), this, SLOT(onSlotEditRecord()));

    connect(deleteDevice, SIGNAL(triggered()), this, SLOT(slotRemoveRecord()));

    connect(addComment, SIGNAL(triggered()), this, SLOT(slotonAddCommentforRecord()));



    // Установка действий в меню

    menu->addAction(editDevice);
    menu->addAction(deleteDevice);
    menu->addAction(addComment);
    menu->addAction(toPlan);
    menu->addAction(showInPlan);
    menu->addAction(delFromPlan);

    // Вызов контекстного меню по документации QT 4, (в 5 не нашёл метода)
    menu->popup(ui->deviceTableView->viewport()->mapToGlobal(pos));
}


void MainWindow::slotRemoveRecord()
{

    // Получение id_ строки
    int row = ui->deviceTableView->selectionModel()->currentIndex().row();
    // Проверка на ошибку выделения, иногда всплывает баг с нумерацией строки в колонке, решение костыль снизу
    if(row >= 0)
    {
        if (QMessageBox::warning(this, trUtf8("Удаление записи"),
                                       trUtf8("Вы уверены, что хотите удалить эту запись?"),
                                       QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
        {
            //Откат базы :)
            QSqlDatabase::database().rollback();
            return;

        }
        else // Удаляем, мочим зависимости
        {
            if(!modelDevice->removeRow(row))
            {
                QMessageBox::warning(this, trUtf8("Проблема"),trUtf8("Не удалось удалить запись\nВозможно мешает какая то зависимость"));
            }
            modelDevice->select();
            ui->deviceTableView->setCurrentIndex(modelDevice->index(-1, -1));
        }
    }
}





/* Слот обновления модели представления данных
 * */
void MainWindow::slotUpdateModels()
{
    modelDevice->select();
}

/* Метод для активации диалога добавления записей в режиме редактирования
 * с передачей индекса выбранной строки
 * */


void MainWindow::slotEditRecord(QModelIndex index)
{
    /* Также создаем диалог и подключаем его сигнал завершения работы
     * к слоту обновления вида модели представления данных, но передаём
     * в качестве параметров строку записи
     * */


        DialogAddDevice addDeviceDialog((index.model()->data(index.model()->index(index.row(), 0)).toInt()));
        connect(&addDeviceDialog, SIGNAL(signalReady()), this, SLOT(slotUpdateModels()));

        addDeviceDialog.setWindowTitle(trUtf8("Редактировать Устройство"));
        addDeviceDialog.exec();

}

void MainWindow::onSlotEditRecord() // Обёртка для отправки в функцию индекс через контекстное меню.
{
    slotEditRecord(ui->deviceTableView->selectionModel()->currentIndex());

}
    //Слот для добавления примечания
void MainWindow::slotAddCommentforRecord(QModelIndex index)
{
    Add_Comment addCommentDialog((index.model()->data(index.model()->index(index.row(), 0)).toInt()));
    connect(&addCommentDialog, SIGNAL(signalReady()), this, SLOT(slotUpdateModels()));
    addCommentDialog.setWindowTitle("Добавить примечание");
    addCommentDialog.exec();
}

    //Функция(обертка для слота выше)
void MainWindow::slotonAddCommentforRecord()
{

    slotAddCommentforRecord(ui->deviceTableView->selectionModel()->currentIndex());
}


void MainWindow::on_Add_action_triggered()
{
    /* Создаем диалог и подключаем его сигнал завершения работы
     * к слоту обновления вида модели представления данных
     * */
    DialogAddDevice *addDeviceDialog = new DialogAddDevice();
    connect(addDeviceDialog, SIGNAL(signalReady()), this, SLOT(slotUpdateModels()));

    /* Выполняем запуск диалогового окна
     * */
    addDeviceDialog->setWindowTitle(trUtf8("Добавить Устройство"));
    addDeviceDialog->exec();
}

void MainWindow::on_Delete_action_triggered()
{
    slotRemoveRecord();
}


void MainWindow::on_SearchButton_clicked()
{
    if (ui->FilterComboBox->currentText() == "Тип устройства")
    {
        modelDevice->setFilter(QString( DEVICE_TYPE "= '%1'").arg(ui->SearchLine->text()));
        modelDevice->select();
    }
    if (ui->FilterComboBox->currentText() == "Название устройства")
    {
        modelDevice->setFilter(QString(DEVICE_NAME "= '%1'").arg(ui->SearchLine->text()));
        modelDevice->select();
    }
    if (ui->FilterComboBox->currentText() == "Инвентарный номер")
    {
        modelDevice->setFilter(QString(DEVICE_INVENTORY_NUMBER "= '%1'").arg(ui->SearchLine->text()));
        modelDevice->select();
    }
    if (ui->FilterComboBox->currentText() == "Местонахождение")
    {
        modelDevice->setFilter(QString(DEVICE_LOCATION "= '%1'").arg(ui->SearchLine->text()));
        modelDevice->select();
    }
    if (ui->FilterComboBox->currentText() == "Статус устройства")
    {
        modelDevice->setFilter(QString(DEVICE_STATUS "= '%1'").arg(ui->SearchLine->text()));
        modelDevice->select();
    }


}

void MainWindow::on_ClearFilterButton_clicked()
{
    modelDevice->setFilter(QString());
    modelDevice->select();
}

void MainWindow::on_SearchLine_returnPressed()
{
    on_SearchButton_clicked();
}

void MainWindow::slotOpenRecord()
{

}
