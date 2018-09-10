#include "cdatetimebuildershortshort.h"

CDateTimeBuilderShortShort::CDateTimeBuilderShortShort(CDateTime* dateTime)
    : CDateTimeBuilder(dateTime)
{
    this->setupFormat();
}

void CDateTimeBuilderShortShort::setupFormat()
{
    this->createTimeFormat(QString("h:m"));
    this->createDateFormat(QString("M/d"));
    this->createWeekDayFormat(QString("ddd"));
}
