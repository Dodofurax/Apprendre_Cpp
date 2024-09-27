#include "centraledalarme.h"
#include <QApplication>
//#include "code.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CentraleDalarme laCentrale;

    return a.exec();
}
