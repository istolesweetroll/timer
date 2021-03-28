#ifndef TIMER_H
#define TIMER_H
#include <QMainWindow>
#include <string>
QT_BEGIN_NAMESPACE
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
    void changeColorScheme(int color);
private slots:
    void on_dial_sliderReleased();

    void on_dial_sliderMoved(int position);

    void on_button_clicked();

    void on_pushButton_clicked();

    void on_dial_3_sliderMoved(int position);

    void on_dial_3_sliderReleased();

    void on_ok_clicked();

    void on_toolButton_clicked();

    void on_toolButton_pressed();

    void on_button_pressed();

private:
    Ui::timer *ui;
    QTimer *t;
};
#endif // TIMER_H
