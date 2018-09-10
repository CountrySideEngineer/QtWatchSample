#ifndef CDATETIMEBUILDERSHORTSHORT_H
#define CDATETIMEBUILDERSHORTSHORT_H
#include "model/cdatetime.h"
#include "model/cdatetimebuilder.h"

/**
 * @brief   Time format - h:m ->  SHORT FORMAT
 *          Date format - M/d ->  SHORT FORMAT
 */
class CDateTimeBuilderShortShort : public CDateTimeBuilder
{
public:
    CDateTimeBuilderShortShort(CDateTime * dateTime);
    virtual ~CDateTimeBuilderShortShort() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDERSHORTSHORT_H
