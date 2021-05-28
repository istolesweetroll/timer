#include "timer.h"
#include "ui_timer.h"
#include "settings.h"
#include <string>
#include <iostream>
#include <string>
#include <unistd.h>
#include <iostream>
#include <unistd.h>
#include <QTimer>
#include <fstream>
#include <QProcess>


using namespace std;
using std::cout; using std::cin;
using std::endl; using std::string;



string colorTheme;
string sound;

timer::timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::timer)
{
    ui->setupUi(this);
    ui ->frame2 -> setVisible(false);
    setFixedSize(size());

    t = new QTimer(this);
    connect(t, &QTimer::timeout, this, &::timer::tick);

    readFromFile();

}

string timer::readFromFile(){
    ifstream infile("settings.txt");

    if (infile.good())
    {

      getline(infile, colorTheme);
      changeColorScheme(stoi(colorTheme));
      getline(infile, sound);

    }
string a = colorTheme + sound;
return a;
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

    if(minutes == ui->timeEdit->dateTime().time().minute() && seconds ==ui->timeEdit->dateTime().time().second()+1){
    t -> stop();
    ui ->stop->setVisible(false);
    ui ->reset->setEnabled(true);
    ui->pauseplay->setEnabled(false);

string path;
char resolved_path[PATH_MAX];
       realpath(".", resolved_path);

        std::string s;
        s = "play ";
        s += resolved_path;
   switch(stoi(sound)) {
      case 0:
        path = s+"/SlowMorning.wav reverse trim 0 5 reverse";
        system(path.c_str());
        break;
      case 1:
        path = "/Daybreak.wav reverse trim 0 5 reverse";
        system(path.c_str());
        break;
      case 2:
        path ="/EarlyRiser.wav reverse trim 0 5 reverse";
        system(path.c_str());
        break;

    }

    }
}


void timer::on_toolButton_pressed()
{
    settings s;
    s .setModal(true);
    s.exec();
}

void timer::on_button_clicked()
{
     ui ->frame2 -> setVisible(true);
}



void timer::on_pauseplay_clicked()
{
    if(t->isActive()){
        t ->stop();
    }
    else{
    t -> start(1000);
    }
}

void timer::on_stop_clicked()
{
    t -> stop();
    ui->stop->setVisible(false);
    ui->reset->setEnabled(true);
    ui->display -> setText("0 : 0 : 0");
    ui->progressBar->setValue(0);
}

void timer::on_reset_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}
