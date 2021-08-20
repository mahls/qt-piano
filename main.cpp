#include "pianowindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pianoWindow w;
    w.show();
    return a.exec();
}
