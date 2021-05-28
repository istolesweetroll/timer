#ifndef TIMER_H
#define TIMER_H
#include <QMainWindow>
#include <string>
QT_BEGIN_NAMESPACE
using namespace std;
namespace Ui { class timer; }
QT_END_NAMESPACE

class timer : public QMainWindow
{
    Q_OBJECT

public:
    timer(QWidget *parent = nullptr);
    ~timer();
public slots:
    void tick();
    string readFromFile();
    void changeColorScheme(int color);
private slots:

    void on_button_clicked();

    void on_toolButton_pressed();

    void on_pauseplay_clicked();

    void on_stop_clicked();

    void on_reset_clicked();

private:
    Ui::timer *ui;
    QTimer *t;
};
#endif // TIMER_H
