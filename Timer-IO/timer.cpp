#include "timer.h"
#include "ui_timer.h"
#include "settings.h"
#include <string>
#include <iostream>
#include <unistd.h>
#include <QTimer>
#include <fstream>
#include <chrono>
#include <ctime>
using namespace std;

timer::timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::timer)
{
    ui->setupUi(this);
    ui ->frame2 -> setVisible(false);

    ui ->button -> setEnabled(false);

    t = new QTimer(this);
    connect(t, &QTimer::timeout, this, &::timer::tick);


}


timer::~timer()
{
    delete ui;
}

void timer::on_dial_sliderReleased()
{

        ui ->button->setEnabled(true);

}

void timer::on_dial_sliderMoved(int position)
{   ui -> label_7 -> setEnabled(false);
    QString a = QString::number(position);
    ui -> label_7 -> setText(a + " ");

}
int hours = 0;
int minutes = 0;
int seconds = 0;

void timer::tick(){
   int max = ui->dial->value() * 60 + ui->dial_3 ->value();
   ui ->progressBar->setMaximum(max+1);

    QString a = QString::number(hours)+" : "+QString::number(minutes)+" : "+ QString::number(seconds);
    ui -> display -> setText(a);

    if(minutes == ui->dial->value() && seconds == ui->dial_3 ->value()){
    t -> stop();

    getchar();
    }
    seconds++;

    if (seconds == 60) {
        minutes++;
        if (minutes == 60) {
            hours++;
            minutes = 0;
        }
        seconds = 0;

    }


    ui ->progressBar->setValue(ui->progressBar->value()+1);

}

void timer::on_button_clicked()
{

 ui ->frame2 -> setVisible(true);


}

void timer::on_pushButton_clicked()
{
t -> start(1000);

}

void timer::on_dial_3_sliderMoved(int position)
{
    ui -> label_15 -> setEnabled(false);
        QString a = QString::number(position);
        ui -> label_15 -> setText(a + " ");
}


void timer::on_dial_3_sliderReleased()
{

    ui ->button->setEnabled(true);

}


void timer::on_toolButton_clicked()
{
    settings s;
    s .setModal(true);
    s.exec();

}
