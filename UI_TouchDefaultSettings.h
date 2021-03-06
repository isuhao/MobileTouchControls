

#ifndef _UI_TouchDefaultSettings_H_
#define _UI_TouchDefaultSettings_H_

#include "UI_Controls.h"
#include "TouchControlsContainer.h"

namespace touchcontrols
{

    typedef struct
    {
        float alpha;
        float lookSensitivity;
        float turnSensitivity;
        float moveSensitivity;

        bool  invertLook;
        bool showJoysticks;
        bool joystickLookMode;
        bool autoHideInventory;
  		bool autoHideNumbers;
		bool weaponWheelEnabled;
        bool fixedMoveStick;

        uint32_t dblTapLeft;
        uint32_t dblTapRight;

    } tTouchSettings;


    UI_Controls *createDefaultSettingsUI( TouchControlsContainer *con, std::string settingsFile );
    sigc::signal<void, tTouchSettings> *getSettingsSignal();

}

#endif