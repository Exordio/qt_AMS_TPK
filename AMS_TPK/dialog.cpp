#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent, Qt::Window | Qt::FramelessWindowHint),ui(new Ui::Dialog),dx( 0 ), dy( 0 )
{
    ui->setupUi(this);
    QPixmap x(":/images/images/40e2fa93.png"),ex(":/images/images/exit.png");

    QIcon ButtonIcon(ex);
    ui->quitButton->setIcon(ButtonIcon);

    ui->pic->setPixmap(x);
    ui->pushButton->setEnabled(false);




    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(change()));
    setWindowTitle("Authorization");
    //connect( ui->btnQuit, SIGNAL( clicked( bool ) ), qApp, SLOT( quit() ) );

    setWindowOpacity(1);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::change()
{
    if(!ui->lineEdit->text().isEmpty())
    ui->pushButton->setEnabled(true);
    else
        ui->pushButton->setEnabled(false);

}

void Dialog::on_pushButton_2_clicked()
{
    close();
}

void Dialog::on_pushButton_clicked()
{
    if((ui->lineEdit->text() == "adm") && (ui->lineEdit_2->text() == "123"))
    {
        this->hide();
        Unlock_Animation *animat = new Unlock_Animation;
        animat->show();
        //QThread:r:msleep(3000);

        QTimer::singleShot(2300, animat, SLOT(HIDE_AND_OPEN_NEXT_WINDOW()));


        //MainWindow *x = new MainWindow;

        //x->show();
        //MainWindow *x = new MainWindow;
        //x->show();



        //QTimer tmr = new QTimer;
        //tmr.setInterval(1000);


    }
    else
    {
        QMessageBox::warning(this,"Введены неверные данные","Пара логин-пароль не найдена.\nПовторите попытку.");
    }

}

void Dialog::mouseMoveEvent(QMouseEvent *e){
    if( e->buttons() | Qt::LeftButton ) {
        setGeometry(
            pos().x() + ( e->x() - dx ),
            pos().y() + ( e->y() - dy ),
            width(),
            height()
        );
    }
}


void Dialog::mousePressEvent( QMouseEvent* e ) {
    if( e->button() == Qt::LeftButton ) {
        dx = e->x();
        dy = e->y();
        setCursor( Qt::OpenHandCursor );
    }
}

void Dialog::mouseReleaseEvent( QMouseEvent* e ) {
    if( e->button() == Qt::LeftButton ) {
        setCursor( Qt::ArrowCursor );
    }
}




void Dialog::on_quitButton_clicked()
{
    close();
}
