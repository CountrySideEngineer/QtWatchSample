#include "cdatetimedirector.h"

CDateTimeDirector::CDateTimeDirector(CDateTimeBuilder* builder)
    : mBuilder(builder)
{}

void CDateTimeDirector::construct()
{
    CDateTime* dateTime = this->mBuilder->getDateTime();

    this->mBuilder->setDate(dateTime->getDate() + "(" + dateTime->getWeekDay() + ")");
    this->mBuilder->setTime(dateTime->getTime());
}
