#include "cdatetimebuilder.h"

CDateTimeBuilder::CDateTimeBuilder(CDateTime *dateTime) : IBuilder (dateTime)
{
    this->setupFormat();
}

void CDateTimeBuilder::setupFormat()
{
    this->createTimeFormat(QString("hh:mm"));
    this->createDateFormat(QString("MM/dd"));
    this->createWeekDayFormat(QString("ddd"));
}
