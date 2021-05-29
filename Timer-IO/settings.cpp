#include "settings.h"
#include "ui_timer.h"
#include "timer.h"
#include <fstream>
#include "ui_settings.h"
#include<QProcess>
using namespace std;
settings::settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    ifstream infile("settings.txt");

    if (infile.good())
    {
      string motyw;
      getline(infile, motyw);
      changeColorScheme(stoi(motyw));
    }

}


settings::~settings()
{
    delete ui;
}
void settings::changeColorScheme(int color){
    if(color == 1){
       ui->frame1->setStyleSheet("QFrame{ background-color: rgb(80,80,110) }");

    }
    if(color == 2){
       ui->frame1->setStyleSheet("QFrame{ background-color: rgb(0,0,0) }");
       ui->label_11->setStyleSheet("QLabel{ color: white }");
       ui->label_12->setStyleSheet("QLabel{ color: white }");
       ui->label_13->setStyleSheet("QLabel{ color: white }");
       ui->dzwiekComboBox_2->setStyleSheet("QComboBox{color: red }");
       ui->motywComboBox_2->setStyleSheet("QComboBox{color: red }");


    }


}


void settings::on_pushButton_5_pressed()
{
this->close();

}
void settings::deleteFile(){
    remove("settings.txt");
}

void settings::writeToFile(){
    std::fstream fs;
   fs.open ("settings.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
   fs << ui->motywComboBox_2->currentIndex() << "\n";
   fs << ui->dzwiekComboBox_2->currentIndex() << "\n";
}


void settings::on_pushButton_4_pressed()
{

   writeToFile();
   qApp->quit();
   QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}
