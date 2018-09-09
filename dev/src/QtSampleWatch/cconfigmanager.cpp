#include "cconfigmanager.h"
#include "model/cdatetime.h"
#include "model/cdatetimebuilderlonglong.h"
#include "model/cdatetimebuilderlongshort.h"
#include "model/cdatetimebuildershortlong.h"
#include "model/cdatetimebuildershortshort.h"

CConfigManager::CConfigManager()
    : mDateDisplayConfig(DATE_DISPLAY_CONFIG_LONG)
    , mTimeDisplayConfig(TIME_DISPLAY_CONFIG_LONG)
{
    this->mDateTimeBuilder = nullptr;
}

#define ConfigToBuilder(TIME_CONFIG, DATE_CONFIG, newBuilder, dateTime, CDateTimeClass)     \
    if ((TIME_CONFIG == this->mTimeDisplayConfig) &&                                        \
        (DATE_CONFIG == this->mDateDisplayConfig))                                          \
    {                                                                                       \
        newBuilder = new CDateTimeClass(dateTime);                                          \
    }

const CDateTimeBuilder* CConfigManager::createDateTimeBuilder(CDateTime* dateTime)
{
    CDateTimeBuilder* newBuilder = nullptr;

    ConfigToBuilder(
                TIME_DISPLAY_CONFIG_LONG, DATE_DISPLAY_CONFIG_LONG, newBuilder, dateTime,
                CDateTimeBuilderLongLong);
    ConfigToBuilder(
                TIME_DISPLAY_CONFIG_SHORT, DATE_DISPLAY_CONFIG_LONG, newBuilder, dateTime,
                CDateTimeBuilderShortLong);
    ConfigToBuilder(
                TIME_DISPLAY_CONFIG_LONG, DATE_DISPLAY_CONFIG_SHORT, newBuilder, dateTime,
                CDateTimeBuilderLongShort);
    ConfigToBuilder(
                TIME_DISPLAY_CONFIG_SHORT, DATE_DISPLAY_CONFIG_SHORT, newBuilder, dateTime,
                CDateTimeBuilderShortShort);

    if (nullptr != newBuilder) {
        delete this->mDateTimeBuilder;
        this->mDateTimeBuilder = newBuilder;
    }

    return this->mDateTimeBuilder;
}
