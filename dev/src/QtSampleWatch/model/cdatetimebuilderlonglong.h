#ifndef CDATETIMEBUILDERLONGLONG_H
#define CDATETIMEBUILDERLONGLONG_H
#include "model/cdatetime.h"
#include "model/cdatetimebuilder.h"

class CDateTimeBuilderLongLong : CDateTimeBuilder
{
public:
    CDateTimeBuilderLongLong(CDateTime* dateTime);
    virtual ~CDateTimeBuilderLongLong() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDERLONGLONG_H
