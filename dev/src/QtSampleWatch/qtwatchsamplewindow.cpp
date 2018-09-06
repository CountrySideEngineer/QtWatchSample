#include "qtwatchsamplewindow.h"
#include "ui_qtwatchsamplewindow.h"
#include "model/cdatetimebuilder.h"
#include "model/cdatetime.h"

QtWatchSampleWindow::QtWatchSampleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtWatchSampleWindow)
{
    ui->setupUi(this);

    this->mDateTime = new CDateTime();
    CDateTimeBuilder builder(this->mDateTime);
    builder.setupFormat();

    this->updateViews();
}

QtWatchSampleWindow::~QtWatchSampleWindow()
{
    delete ui;

    if (nullptr != this->mDateTime) {
        delete this->mDateTime;
    }
    this->mDateTime = nullptr;
}

void QtWatchSampleWindow::updateViews()
{
    this->ui->timeLabel->setText(this->mDateTime->getTime());
    this->ui->dateLabel->setText(
                this->mDateTime->getDate() + " (" + this->mDateTime->getWeekDay() + ")");
}
