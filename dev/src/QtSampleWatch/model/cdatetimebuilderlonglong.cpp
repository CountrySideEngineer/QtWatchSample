#include "cdatetimebuilderlonglong.h"

CDateTimeBuilderLongLong::CDateTimeBuilderLongLong(CDateTime* dateTime)
    : CDateTimeBuilder(dateTime)
{
    this->setupFormat();
}

void CDateTimeBuilderLongLong::setupFormat()
{
    this->createTimeFormat(QString("hh:mm"));
    this->createDateFormat(QString("MM/dd"));
    this->createWeekDayFormat(QString("dddd"));
}
