#include "unlock_animation.h"
#include "ui_unlock_animation.h"


Unlock_Animation::Unlock_Animation(QWidget *parent) :
    QDialog(parent, Qt::Window | Qt::FramelessWindowHint),
    ui(new Ui::Unlock_Animation),dx( 0 ), dy( 0 )
{
    ui->setupUi(this);
    // Инициалицазия анимационного класса
    QMovie *anim = new QMovie(":/images/images/unlock_animaiton.gif");
    ui->label->setMovie(anim);
    anim->start();
    setWindowTitle(" ");

    setWindowOpacity(0.8);


}

Unlock_Animation::~Unlock_Animation()
{
    delete ui;
}

void Unlock_Animation::HIDE_AND_OPEN_NEXT_WINDOW()
{

    
    this->close();
    MainWindow *x = new MainWindow;
    x->setMinimumHeight(768);
    x->setMaximumHeight(768);
    x->setMinimumWidth(1366);
    x->setMaximumWidth(1366);
    x->show();
    

}


