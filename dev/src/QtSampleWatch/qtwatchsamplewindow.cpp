#include "qtwatchsamplewindow.h"
#include "ui_qtwatchsamplewindow.h"

QtWatchSampleWindow::QtWatchSampleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtWatchSampleWindow)
{
    ui->setupUi(this);
}

QtWatchSampleWindow::~QtWatchSampleWindow()
{
    delete ui;
}
