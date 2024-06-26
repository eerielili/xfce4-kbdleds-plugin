/*  xfce4-kbdleds-plugin - panel plugin for keyboard LEDs
 *
 *  Copyright (c) 2011-2024 OCo <oco2000@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __KBDLEDS_H__
#define __KBDLEDS_H__

#include <gtk/gtk.h>
#include <libxfce4util/libxfce4util.h>
#include <libxfce4panel/libxfce4panel.h>
#include <X11/XKBlib.h>

G_BEGIN_DECLS

/* plugin structure */
typedef struct
{
    XfcePanelPlugin *plugin;

    /* panel widgets */
    GtkWidget       *ebox;
    GtkWidget       *hvbox;
    GtkWidget       *label;

    /* kbdleds settings */
    GdkRGBA          foreground_color;
    GdkRGBA          background_color;
    gboolean         show_caps;
    gboolean         show_num;
    gboolean         show_scroll;
}
KbdledsPlugin;

/* default settings */
#define DEFAULT_FOREGROUND_COLOR "#000000"
#define DEFAULT_BACKGROUND_COLOR "#00FF00"

void
kbdleds_save (XfcePanelPlugin *plugin,
             KbdledsPlugin    *kbdleds);

void show_error(gchar *message);

void refresh();

G_END_DECLS

#endif /* !__KBDLEDS_H__ */
