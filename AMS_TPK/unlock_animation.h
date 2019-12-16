#ifndef UNLOCK_ANIMATION_H
#define UNLOCK_ANIMATION_H

#include <QDialog>
#include <QDialog>
#include <QMovie>
#include <dialog.h>
#include <mainwindow.h>
#include <dialog.h>


namespace Ui {
class Unlock_Animation;
}

class Unlock_Animation : public QDialog
{
    Q_OBJECT

public:
    explicit Unlock_Animation(QWidget *parent = 0);
    ~Unlock_Animation();

private:
    Ui::Unlock_Animation *ui;
    int dx;
    int dy;
private slots:
   void HIDE_AND_OPEN_NEXT_WINDOW();
};

#endif // UNLOCK_ANIMATION_H
