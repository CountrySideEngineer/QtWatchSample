#ifndef QTWATCHSAMPLEWINDOW_H
#define QTWATCHSAMPLEWINDOW_H

#include <QMainWindow>
#include "model/cdatetime.h"

namespace Ui {
class QtWatchSampleWindow;
}

class QtWatchSampleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtWatchSampleWindow(QWidget *parent = nullptr);
    ~QtWatchSampleWindow();

protected:
    void updateViews();

private:
    Ui::QtWatchSampleWindow *ui;

    CDateTime *mDateTime;
};

#endif // QTWATCHSAMPLEWINDOW_H
