#include "qtwatchsamplewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWatchSampleWindow w;
#ifdef PLATFORM_WIN32
    w.show();
#else
    w.showFullScreen();
#endif

    return a.exec();
}
