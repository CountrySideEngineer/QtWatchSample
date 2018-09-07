#include "cdatetimebuilderlongshort.h"

CDateTimeBuilderLongShort::CDateTimeBuilderLongShort(CDateTime* dateTime)
    : CDateTimeBuilder(dateTime)
{
    this->setupFormat();
}

void CDateTimeBuilderLongShort::setupFormat()
{
    this->createTimeFormat(QString("hh:mm"));
    this->createDateFormat(QString("M/d"));
    this->createWeekDayFormat(QString("ddd"));
}
