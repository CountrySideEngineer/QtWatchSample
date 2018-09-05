#ifndef QTWATCHSAMPLEWINDOW_H
#define QTWATCHSAMPLEWINDOW_H

#include <QMainWindow>

namespace Ui {
class QtWatchSampleWindow;
}

class QtWatchSampleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtWatchSampleWindow(QWidget *parent = nullptr);
    ~QtWatchSampleWindow();

private:
    Ui::QtWatchSampleWindow *ui;
};

#endif // QTWATCHSAMPLEWINDOW_H
