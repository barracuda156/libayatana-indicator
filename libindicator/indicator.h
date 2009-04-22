
#ifndef __LIBINDICATOR_INDICATOR_H_SEEN__
#define __LIBINDICATOR_INDICATOR_H_SEEN__ 1

#include <gtk/gtk.h>

#define INDICATOR_GET_LABEL_S  "get_label"
typedef GtkLabel * (*get_label_t)(void);
GtkLabel * get_label (void);

#define INDICATOR_GET_ICON_S   "get_icon"
typedef GtkImage * (*get_icon_t)  (void);
GtkImage * get_icon (void);

#define INDICATOR_GET_MENU_S   "get_menu"
typedef GtkMenu * (*get_menu_t) (void);
GtkMenu * get_menu (void);

#define INDICATOR_GET_VERSION_S "get_version"
typedef gchar * (*get_version_t) (void);
gchar * get_version (void);

#define INDICATOR_VERSION "0.2.0"
#define INDICATOR_SET_VERSION  gchar * get_version(void) { return INDICATOR_VERSION; }
#define INDICATOR_VERSION_CHECK(x)  (!g_strcmp0(x, INDICATOR_VERSION))

#define INDICATOR_GET_NAME_S "get_name"
typedef gchar * (*get_name_t) (void);
gchar * get_name (void);
#define INDICATOR_SET_NAME(x)  gchar * get_name(void) {return (x); }


#endif /* __LIBINDICATOR_INDICATOR_H_SEEN__ */
