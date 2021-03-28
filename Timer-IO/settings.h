#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

namespace Ui {
class settings;
}

class settings : public QDialog
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();
public slots:
    void changeColorScheme(int color);
private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_pressed();

    void on_pushButton_4_pressed();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
