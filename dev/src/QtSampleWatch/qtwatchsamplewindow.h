#ifndef QTWATCHSAMPLEWINDOW_H
#define QTWATCHSAMPLEWINDOW_H

#include <map>
#include <QMainWindow>
#include <QTimer>
#include "model/cdatetime.h"
#include "cconfigmanager.h"
using namespace std;

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
    void updateDateDisplayConfig();
    void updateDateDisplayConfig(QString objectName);
    void updateTimeDisplayConfig();
    void updateTimeDisplayConfig(QString objectName);



protected slots:
    void onTimerDispatch();
    void onDateDisplayConfigGroupClicked(int);
    void onTimeDisplayConfigGroupClicked(int);

private:
    Ui::QtWatchSampleWindow *ui;

    CDateTime *mDateTime;
    CConfigManager* mConfigManager;

    map<QString, CConfigManager::DATE_DISPLAY_CONFIG> mDateMap;
    map<QString, CConfigManager::TIME_DISPLAY_CONFIG> mTimeMap;
    QTimer* mTimer;
};

#endif // QTWATCHSAMPLEWINDOW_H
