#ifndef CCONFIGMANAGER_H
#define CCONFIGMANAGER_H

#include "model/cdatetimebuilder.h"


class CConfigManager
{
public:
    enum DATE_DISPLAY_CONFIG {
        DATE_DISPLAY_CONFIG_LONG = 0,   //default
        DATE_DISPLAY_CONFIG_SHORT,
        DATE_DISPLAY_CONFIG_MAX
    };
    enum TIME_DISPLAY_CONFIG {
        TIME_DISPLAY_CONFIG_LONG = 0,   //default
        TIME_DISPLAY_CONFIG_SHORT,
        TIME_DISPLAY_CONFIG_MAX
    };

public:
    CConfigManager();
    virtual ~CConfigManager() {}

    virtual void updateTimeDisplayConfig(TIME_DISPLAY_CONFIG config)
    { this->mTimeDisplayConfig = config; }
    virtual void updateDateDisplayConfig(DATE_DISPLAY_CONFIG config)
    { this->mDateDisplayConfig = config;  }

    virtual CDateTimeBuilder* getDateTimeBuilder() const { return this->mDateTimeBuilder; }

protected:
    virtual void updateDisplayConfig();

protected:
    DATE_DISPLAY_CONFIG mDateDisplayConfig;
    TIME_DISPLAY_CONFIG mTimeDisplayConfig;

    CDateTimeBuilder* mDateTimeBuilder;
};

#endif // CCONFIGMANAGER_H
