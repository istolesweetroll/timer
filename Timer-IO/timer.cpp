#include "timer.h"
#include "ui_timer.h"
#include "settings.h"
#include <string>
#include <iostream>
#include <unistd.h>
#include <QTimer>
#include <fstream>
using namespace std;

timer::timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::timer)
{
    ui->setupUi(this);
    ui ->frame2 -> setVisible(false);

    t = new QTimer(this);
    connect(t, &QTimer::timeout, this, &::timer::tick);

    ifstream infile("settings.txt");

    if (infile.good())
    {

      string motyw;
      getline(infile, motyw);
      cout << motyw << endl;
      changeColorScheme(stoi(motyw));
    }

}



timer::~timer()
{
    delete ui;
}

void timer::changeColorScheme(int color){
    if(color == 1){
       ui->frame1->setStyleSheet("QFrame{ background-color: rgb(80,80,110) }");
       ui->frame2->setStyleSheet("QFrame{ background-color: rgb(80,80,110) }");

    }
    if(color == 2){
       ui->frame1->setStyleSheet("QFrame{ background-color: rgb(0,0,0) }");
       ui->frame2->setStyleSheet("QFrame{ background-color: rgb(0,0,0) }");
       ui-> label->setStyleSheet("QLabel { color : white; }");
       ui-> display->setStyleSheet("QLabel { color : white; }");
       ui->progressBar->setStyleSheet("QProgressBar::chunk {background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0,stop: 0 #FF0350,stop: 0.4999 #FF0020,stop: 0.5 #FF0019,stop: 1 #FF0000 );border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}");

    }




}
int hours = 0;
int minutes = 0;
int seconds = 0;

void timer::tick(){
   int max = ui->timeEdit->dateTime().time().minute() * 60 + ui->timeEdit->dateTime().time().second();
   ui ->progressBar->setMaximum(max+1);

    QString a = QString::number(hours)+" : "+QString::number(minutes)+" : "+ QString::number(seconds);
    ui -> display -> setText(a);

    if(minutes == ui->timeEdit->dateTime().time().minute() && seconds ==ui->timeEdit->dateTime().time().second()){
    t -> stop();

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

void timer::on_pushButton_clicked()
{
t -> start(1000);

}



void timer::on_toolButton_pressed()
{
    settings s;
    s .setModal(true);
    s.exec();
}

void timer::on_button_pressed()
{
     ui ->frame2 -> setVisible(true);
}
