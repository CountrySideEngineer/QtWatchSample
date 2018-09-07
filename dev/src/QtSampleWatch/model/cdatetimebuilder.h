#ifndef CDATETIMEBUILDER_H
#define CDATETIMEBUILDER_H

#include <QObject>
#include "ibuilder.h"
#include "cdatetime.h"

class CDateTimeBuilder : public IBuilder
{
public:
    CDateTimeBuilder(CDateTime *dateTime);
    virtual ~CDateTimeBuilder() {}

    virtual void setupFormat();
    virtual void setDate(QString dateString) { this->mDateString = dateString; }
    virtual void setTime(QString timeString) { this->mTimeString = timeString; }
    virtual QString getDate() const { return this->mDateString; }
    virtual QString getTime() const { return this->mTimeString; }

protected:
    QString mDateString;
    QString mTimeString;

};

#endif // CDATETIMEBUILDER_H
