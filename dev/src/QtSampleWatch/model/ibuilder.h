#ifndef IBUILDER_H
#define IBUILDER_H
#include <QObject>
#include <QString>
#include "cdatetime.h"

class IBuilder
{
public:
    IBuilder(CDateTime* dateTime) { this->mDateTime = dateTime; }
    virtual ~IBuilder() {}

    virtual void createTimeFormat(QString format) { this->mDateTime->setTimeFormat(format); }
    virtual void createDateFormat(QString format) { this->mDateTime->setDateFormat(format); }
    virtual void createWeekDayFormat(QString format) { this->mDateTime->setWeekDayFormat(format); }

    virtual CDateTime* getDateTime() const { return this->mDateTime; }
    virtual void setupFormat() = 0;

protected:
    CDateTime* mDateTime;
};

#endif // IBUILDER_H
