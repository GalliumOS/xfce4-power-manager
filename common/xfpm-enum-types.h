


#ifndef _XFPM_ENUM_TYPES_H
#define _XFPM_ENUM_TYPES_H
#include <glib-object.h>
G_BEGIN_DECLS
/* enumerations from "./xfpm-enum-glib.h" */
GType xfpm_battery_charge_get_type (void);
#define XFPM_TYPE_BATTERY_CHARGE (xfpm_battery_charge_get_type())
GType xfpm_shutdown_request_get_type (void);
#define XFPM_TYPE_SHUTDOWN_REQUEST (xfpm_shutdown_request_get_type())
GType xfpm_lid_trigger_action_get_type (void);
#define XFPM_TYPE_LID_TRIGGER_ACTION (xfpm_lid_trigger_action_get_type())
GType xfpm_button_key_get_type (void);
#define XFPM_TYPE_BUTTON_KEY (xfpm_button_key_get_type())
GType xfpm_spindown_request_get_type (void);
#define XFPM_TYPE_SPINDOWN_REQUEST (xfpm_spindown_request_get_type())
GType xfpm_show_icon_get_type (void);
#define XFPM_TYPE_SHOW_ICON (xfpm_show_icon_get_type())
G_END_DECLS

#endif /* _XFPM_ENUM_TYPES_H__ */



