#include "qtwatchsamplewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWatchSampleWindow w;
    w.show();

    return a.exec();
}
