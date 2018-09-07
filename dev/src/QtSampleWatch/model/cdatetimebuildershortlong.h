#ifndef CDATETIMEBUILDERSHORTLONG_H
#define CDATETIMEBUILDERSHORTLONG_H
#include "model/cdatetime.h"
#include "model/cdatetimebuilder.h"

class CDateTimeBuilderShortLong : public CDateTimeBuilder
{
public:
    CDateTimeBuilderShortLong(CDateTime* dateTime);
    virtual ~CDateTimeBuilderShortLong() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDERSHORTLONG_H
