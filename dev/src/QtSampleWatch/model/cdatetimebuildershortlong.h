#ifndef CDATETIMEBUILDERSHORTLONG_H
#define CDATETIMEBUILDERSHORTLONG_H
#include "model/cdatetime.h"
#include "model/cdatetimebuilder.h"

/**
 * @brief   Time format - h:m   ->  SHORT FORMAT
 *          Date format - MM/dd ->  LONG FORMAT
 */
class CDateTimeBuilderShortLong : public CDateTimeBuilder
{
public:
    CDateTimeBuilderShortLong(CDateTime* dateTime);
    virtual ~CDateTimeBuilderShortLong() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDERSHORTLONG_H
