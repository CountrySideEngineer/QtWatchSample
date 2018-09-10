#ifndef CDATETIMEDIRECTOR_H
#define CDATETIMEDIRECTOR_H

#include "cdatetime.h"
#include "cdatetimebuilder.h"

class CDateTimeDirector
{
public:
    CDateTimeDirector(CDateTimeBuilder* builder);
    virtual ~CDateTimeDirector() {}

    virtual void construct();
protected:
    CDateTimeBuilder* mBuilder;
};

#endif // CDATETIMEDIRECTOR_H
