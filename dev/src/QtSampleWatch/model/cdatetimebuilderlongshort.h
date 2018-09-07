#ifndef CDATETIMEBUILDERLONGSHORT_H
#define CDATETIMEBUILDERLONGSHORT_H
#include "model/cdatetime.h"
#include "model/CDateTimeBuilder.h"

class CDateTimeBuilderLongShort : public CDateTimeBuilder
{
public:
    CDateTimeBuilderLongShort(CDateTime* dateTime);
    virtual ~CDateTimeBuilderLongShort() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDERLONGSHORT_H
