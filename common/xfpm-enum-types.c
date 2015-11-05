


#include <xfpm-enum-types.h>
#include "xfpm-enum-glib.h"


/* enumerations from "./xfpm-enum-glib.h" */
GType
xfpm_battery_charge_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ XFPM_BATTERY_CHARGE_UNKNOWN, "XFPM_BATTERY_CHARGE_UNKNOWN", "unknown" },
	{ XFPM_BATTERY_CHARGE_CRITICAL, "XFPM_BATTERY_CHARGE_CRITICAL", "critical" },
	{ XFPM_BATTERY_CHARGE_LOW, "XFPM_BATTERY_CHARGE_LOW", "low" },
	{ XFPM_BATTERY_CHARGE_OK, "XFPM_BATTERY_CHARGE_OK", "ok" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfpmBatteryCharge", values);
  }
	return type;
}
GType
xfpm_shutdown_request_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ XFPM_DO_NOTHING, "XFPM_DO_NOTHING", "do-nothing" },
	{ XFPM_DO_SUSPEND, "XFPM_DO_SUSPEND", "do-suspend" },
	{ XFPM_DO_HIBERNATE, "XFPM_DO_HIBERNATE", "do-hibernate" },
	{ XFPM_ASK, "XFPM_ASK", "ask" },
	{ XFPM_DO_SHUTDOWN, "XFPM_DO_SHUTDOWN", "do-shutdown" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfpmShutdownRequest", values);
  }
	return type;
}
GType
xfpm_lid_trigger_action_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ LID_TRIGGER_NOTHING, "LID_TRIGGER_NOTHING", "nothing" },
	{ LID_TRIGGER_SUSPEND, "LID_TRIGGER_SUSPEND", "suspend" },
	{ LID_TRIGGER_HIBERNATE, "LID_TRIGGER_HIBERNATE", "hibernate" },
	{ LID_TRIGGER_LOCK_SCREEN, "LID_TRIGGER_LOCK_SCREEN", "lock-screen" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfpmLidTriggerAction", values);
  }
	return type;
}
GType
xfpm_button_key_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ BUTTON_UNKNOWN, "BUTTON_UNKNOWN", "button-unknown" },
	{ BUTTON_POWER_OFF, "BUTTON_POWER_OFF", "button-power-off" },
	{ BUTTON_HIBERNATE, "BUTTON_HIBERNATE", "button-hibernate" },
	{ BUTTON_SLEEP, "BUTTON_SLEEP", "button-sleep" },
	{ BUTTON_MON_BRIGHTNESS_UP, "BUTTON_MON_BRIGHTNESS_UP", "button-mon-brightness-up" },
	{ BUTTON_MON_BRIGHTNESS_DOWN, "BUTTON_MON_BRIGHTNESS_DOWN", "button-mon-brightness-down" },
	{ BUTTON_LID_CLOSED, "BUTTON_LID_CLOSED", "button-lid-closed" },
	{ BUTTON_BATTERY, "BUTTON_BATTERY", "button-battery" },
	{ BUTTON_KBD_BRIGHTNESS_UP, "BUTTON_KBD_BRIGHTNESS_UP", "button-kbd-brightness-up" },
	{ BUTTON_KBD_BRIGHTNESS_DOWN, "BUTTON_KBD_BRIGHTNESS_DOWN", "button-kbd-brightness-down" },
	{ NUMBER_OF_BUTTONS, "NUMBER_OF_BUTTONS", "number-of-buttons" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfpmButtonKey", values);
  }
	return type;
}
GType
xfpm_spindown_request_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ SPIN_DOWN_HDD_NEVER, "SPIN_DOWN_HDD_NEVER", "never" },
	{ SPIN_DOWN_HDD_ON_BATTERY, "SPIN_DOWN_HDD_ON_BATTERY", "on-battery" },
	{ SPIN_DOWN_HDD_PLUGGED_IN, "SPIN_DOWN_HDD_PLUGGED_IN", "plugged-in" },
	{ SPIN_DOWN_HDD_ALWAYS, "SPIN_DOWN_HDD_ALWAYS", "always" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfpmSpindownRequest", values);
  }
	return type;
}
GType
xfpm_show_icon_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
	{ SHOW_ICON_ALWAYS, "SHOW_ICON_ALWAYS", "show-icon-always" },
	{ SHOW_ICON_WHEN_BATTERY_PRESENT, "SHOW_ICON_WHEN_BATTERY_PRESENT", "show-icon-when-battery-present" },
	{ SHOW_ICON_WHEN_BATTERY_CHARGING_DISCHARGING, "SHOW_ICON_WHEN_BATTERY_CHARGING_DISCHARGING", "show-icon-when-battery-charging-discharging" },
	{ NEVER_SHOW_ICON, "NEVER_SHOW_ICON", "never-show-icon" },
	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("XfpmShowIcon", values);
  }
	return type;
}



