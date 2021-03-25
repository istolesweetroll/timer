#include "settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
}

settings::~settings()
{
    delete ui;
}

void settings::on_pushButton_3_clicked()
{
    this ->close();
}
