#include "trigmaster.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TrigMaster w;
    w.show();
    return a.exec();
}
