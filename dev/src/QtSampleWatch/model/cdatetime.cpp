#include "cdatetime.h"
#include <QDate>
#include <QDateTime>
#include <QString>

QString CDateTime::getTime() { return  this->getInFormat(this->mTimeFormat); }
QString CDateTime::getDate() { return  this->getInFormat(this->mDateFormat); }
QString CDateTime::getWeekDay() { return this->getInFormat(this->mWDayFormat); }
QString CDateTime::getInFormat(QString format)
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateString = dateTime.toString(format);

    if (dateString.isEmpty()) {
        dateString = "FORMAT INVALID.";
    }
    return dateString;
}
