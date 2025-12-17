#include "applewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AppleWindow w;
    w.show();
    return a.exec();
}
