/*
 * * Copyright (C) 2008-2011 Ali <aliov@xfce.org>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <glib.h>
#include <dbus/dbus-glib.h>

#include "xfpm-network-manager.h"

/*
 * Inform the Network Manager when we do suspend/hibernate 
 */
gboolean 	xfpm_network_manager_sleep  	(gboolean sleep)
{
#ifdef WITH_NETWORK_MANAGER

    DBusGConnection *bus   = NULL;
    DBusGProxy      *proxy = NULL;
    GError          *error = NULL;
    
    bus = dbus_g_bus_get ( DBUS_BUS_SYSTEM, &error);
    
    if ( error )
    {
	g_warning("%s", error->message);
	g_error_free (error);
	return FALSE;
    }
    
    proxy = dbus_g_proxy_new_for_name (bus,
				       "org.freedesktop.NetworkManager",
				       "/org/freedesktop/NetworkManager",
				       "org.freedesktop.NetworkManager");
				       
    if (!proxy)
    {
	g_warning ("Failed to create proxy for Network Manager interface");
	return FALSE;
    }
    
    dbus_g_proxy_call_no_reply (proxy, "Sleep", G_TYPE_BOOLEAN, sleep, G_TYPE_INVALID);
    g_object_unref (G_OBJECT(proxy));
    dbus_g_connection_unref (bus);
    
    /* Sleep 0.5 second to allow the nm applet to disconnect*/
    g_usleep (500000);
    
#endif /* WITH_NETWORK_MANAGER */
    return TRUE;
}
