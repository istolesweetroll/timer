#ifndef SETTINGS_H
#define SETTINGS_H
#include <string>
#include <QDialog>
using namespace std;
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
    void writeToFile();
    void writeTextToFile(string text);
    void deleteFile();
private slots:

    void on_pushButton_5_pressed();

    void on_pushButton_4_pressed();

public:
    Ui::settings *ui;
};

#endif // SETTINGS_H
