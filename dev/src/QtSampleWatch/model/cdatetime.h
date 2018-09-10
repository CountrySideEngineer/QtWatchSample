#ifndef CDATETIME_H
#define CDATETIME_H

#include <QObject>
#include <QString>

class CDateTime
{
public:
    CDateTime() {}
    virtual ~CDateTime() {}

public:
    QString getTime();
    QString getDate();
    QString getWeekDay();

    void setTimeFormat(QString foramt) { this->mTimeFormat = foramt; }
    void setDateFormat(QString foramt) { this->mDateFormat = foramt; }
    void setWeekDayFormat(QString format) { this->mWDayFormat = format; }

protected:
    QString getInFormat(QString format);

protected:
    QString mTimeFormat;
    QString mDateFormat;
    QString mWDayFormat;
};

#endif // CDATETIME_H
