#ifndef CDATETIMEBUILDER_H
#define CDATETIMEBUILDER_H

#include <QObject>
#include "ibuilder.h"
#include "cdatetime.h"

class CDateTimeBuilder : public IBuilder
{
public:
    CDateTimeBuilder(CDateTime *dateTime);
    virtual ~CDateTimeBuilder() {}

    virtual void setupFormat();
};

#endif // CDATETIMEBUILDER_H
