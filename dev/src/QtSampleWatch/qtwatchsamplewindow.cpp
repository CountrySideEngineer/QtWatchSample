#include <QtDebug>
#include "qtwatchsamplewindow.h"
#include "ui_qtwatchsamplewindow.h"
#include "model/cdatetimebuilder.h"
#include "model/cdatetime.h"
#include "model/cdatetimedirector.h"
#include "cconfigmanager.h"

QtWatchSampleWindow::QtWatchSampleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtWatchSampleWindow),
    mTimer(new QTimer(this))
{
    ui->setupUi(this);

    this->mTimer->setInterval(100);
    this->mTimer->setSingleShot(false);

    connect(this->mTimer, SIGNAL(timeout()), this, SLOT(onTimerDispatch()));
    connect(this->ui->dateDisplayConfigGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(onDateDisplayConfigGroupClicked(int)));
    connect(this->ui->timeDisplayConfigGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(onTimeDisplayConfigGroupClicked(int)));

    this->mConfigManager = new CConfigManager();
    this->mDateTime = new CDateTime();

    this->mDateMap[tr("dateDisplayLongFormat")] =
            CConfigManager::DATE_DISPLAY_CONFIG::DATE_DISPLAY_CONFIG_LONG;
    this->mDateMap[tr("dateDisplayShortFormat")] =
            CConfigManager::DATE_DISPLAY_CONFIG::DATE_DISPLAY_CONFIG_SHORT;
    this->mTimeMap[tr("timeDisplayLongFormat")] =
            CConfigManager::TIME_DISPLAY_CONFIG::TIME_DISPLAY_CONFIG_LONG;
    this->mTimeMap[tr("timeDisplayShortFormat")] =
            CConfigManager::TIME_DISPLAY_CONFIG::TIME_DISPLAY_CONFIG_SHORT;

    this->mTimer->start();

    this->updateDateDisplayConfig();
    this->updateTimeDisplayConfig();
}

QtWatchSampleWindow::~QtWatchSampleWindow()
{
    delete ui;

    delete this->mDateTime;
    this->mDateTime = nullptr;

    delete this->mConfigManager;
    this->mConfigManager = nullptr;
}

void QtWatchSampleWindow::updateViews()
{
    CDateTimeBuilder* builder = (CDateTimeBuilder*)(this->mConfigManager->createDateTimeBuilder(this->mDateTime));
    CDateTimeDirector director(builder);
    director.construct();

    this->ui->timeLabel->setText(builder->getTime());
    this->ui->dateLabel->setText(builder->getDate());
}

void QtWatchSampleWindow::onDateDisplayConfigGroupClicked(int /* id */)
{
    this->updateDateDisplayConfig();
}

void QtWatchSampleWindow::onTimeDisplayConfigGroupClicked(int /* id */)
{
    this->updateTimeDisplayConfig();
}

void QtWatchSampleWindow::updateDateDisplayConfig()
{
    this->updateDateDisplayConfig(
                this->ui->dateDisplayConfigGroup->checkedButton()->objectName());
}

void QtWatchSampleWindow::updateDateDisplayConfig(QString objectName)
{
    try {
        this->mConfigManager->updateDateDisplayConfig(this->mDateMap[objectName]);
        this->updateViews();
    }
    catch (exception &e) {
        qDebug() << e.what();
    }
}

void QtWatchSampleWindow::updateTimeDisplayConfig()
{
    this->updateTimeDisplayConfig(
                this->ui->timeDisplayConfigGroup->checkedButton()->objectName());
}

void QtWatchSampleWindow::updateTimeDisplayConfig(QString objectName)
{
    try {
        this->mConfigManager->updateTimeDisplayConfig(this->mTimeMap[objectName]);
        this->updateViews();
    }
    catch (exception &e) {
        qDebug() << e.what();
    }
}

void QtWatchSampleWindow::onTimerDispatch()
{
    this->updateDateDisplayConfig();
    this->updateTimeDisplayConfig();
}


