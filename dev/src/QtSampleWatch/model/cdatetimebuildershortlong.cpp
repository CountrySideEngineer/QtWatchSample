#include "cdatetimebuildershortlong.h"

CDateTimeBuilderShortLong::CDateTimeBuilderShortLong(CDateTime *dateTime)
    : CDateTimeBuilder(dateTime)
{
    this->setupFormat();
}

void CDateTimeBuilderShortLong::setupFormat()
{
    this->createTimeFormat(QString("h:m"));
    this->createDateFormat(QString("MM/dd"));
    this->createWeekDayFormat(QString("dddd"));
}
