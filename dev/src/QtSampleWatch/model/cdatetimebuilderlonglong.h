#ifndef CDATETIMEBUILDERLONGLONG_H
#define CDATETIMEBUILDERLONGLONG_H
#include "model/cdatetime.h"
#include "model/cdatetimebuilder.h"

/**
 * @brief   Time format - hh:mm ->  LONG FORMAT
 *          Date format - MM/dd ->  LONG FORMAT
 */
class CDateTimeBuilderLongLong : public CDateTimeBuilder
{
public:
    CDateTimeBuilderLongLong(CDateTime* dateTime);
    virtual ~CDateTimeBuilderLongLong() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDERLONGLONG_H
