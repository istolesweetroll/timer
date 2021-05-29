#include "timer.cpp"
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    timer w;
    w.show();
    return a.exec();

}
