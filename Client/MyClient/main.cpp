#include "startwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartWindow window;
    window.show();
    return a.exec();
}