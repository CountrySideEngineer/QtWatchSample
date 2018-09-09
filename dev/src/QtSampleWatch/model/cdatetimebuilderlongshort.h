#ifndef CDATETIMEBUILDERLONGSHORT_H
#define CDATETIMEBUILDERLONGSHORT_H
#include "model/cdatetime.h"
#include "model/cdatetimebuilder.h"

/**
 * @brief   Time format - hh:mm ->  LONG FORMAT
 *          Date format - MM/dd ->  SHORT FORMAT
 */
class CDateTimeBuilderLongShort : public CDateTimeBuilder
{
public:
    CDateTimeBuilderLongShort(CDateTime* dateTime);
    virtual ~CDateTimeBuilderLongShort() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDERLONGSHORT_H
