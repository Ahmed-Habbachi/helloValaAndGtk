/* Application.c generated by valac 0.40.10, the Vala compiler
 * generated from Application.vala, do not modify */

/*
* Copyright (c) 2011-2018 Your Organization (https://ahmed-develop.net)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Ahmed HABBACHI ahmed.habbachi@outlook.com
*/


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_MY_APP (my_app_get_type ())
#define MY_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MY_APP, MyApp))
#define MY_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MY_APP, MyAppClass))
#define IS_MY_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MY_APP))
#define IS_MY_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MY_APP))
#define MY_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MY_APP, MyAppClass))

typedef struct _MyApp MyApp;
typedef struct _MyAppClass MyAppClass;
typedef struct _MyAppPrivate MyAppPrivate;
enum  {
	MY_APP_0_PROPERTY,
	MY_APP_NUM_PROPERTIES
};
static GParamSpec* my_app_properties[MY_APP_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _MyApp {
	GtkApplication parent_instance;
	MyAppPrivate * priv;
};

struct _MyAppClass {
	GtkApplicationClass parent_class;
};


static gpointer my_app_parent_class = NULL;

GType my_app_get_type (void) G_GNUC_CONST;
MyApp* my_app_new (void);
MyApp* my_app_construct (GType object_type);
static void my_app_real_activate (GApplication* base);
gint my_app_main (gchar** args,
                  int args_length1);


MyApp*
my_app_construct (GType object_type)
{
	MyApp * self = NULL;
#line 25 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	self = (MyApp*) g_object_new (object_type, "application-id", "com.github.Ahmed-Habbachi.helloValaAndGtk", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 24 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	return self;
#line 81 "Application.c"
}


MyApp*
my_app_new (void)
{
#line 24 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	return my_app_construct (TYPE_MY_APP);
#line 90 "Application.c"
}


static void
my_app_real_activate (GApplication* base)
{
	MyApp * self;
	GtkLabel* label = NULL;
	GtkLabel* _tmp0_;
	GtkApplicationWindow* main_window = NULL;
	GtkApplicationWindow* _tmp1_;
#line 31 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	self = (MyApp*) base;
#line 32 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	_tmp0_ = (GtkLabel*) gtk_label_new (_ ("Hello Again Wolrd!"));
#line 32 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	g_object_ref_sink (_tmp0_);
#line 32 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	label = _tmp0_;
#line 34 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	_tmp1_ = (GtkApplicationWindow*) gtk_application_window_new ((GtkApplication*) self);
#line 34 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	g_object_ref_sink (_tmp1_);
#line 34 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	main_window = _tmp1_;
#line 35 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	g_object_set ((GtkWindow*) main_window, "default-height", 300, NULL);
#line 36 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	g_object_set ((GtkWindow*) main_window, "default-width", 300, NULL);
#line 37 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	gtk_window_set_title ((GtkWindow*) main_window, _ ("HELLO World"));
#line 39 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	gtk_container_add ((GtkContainer*) main_window, (GtkWidget*) label);
#line 41 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	gtk_widget_show_all ((GtkWidget*) main_window);
#line 31 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	_g_object_unref0 (main_window);
#line 31 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	_g_object_unref0 (label);
#line 130 "Application.c"
}


gint
my_app_main (gchar** args,
             int args_length1)
{
	gint result = 0;
	MyApp* app = NULL;
	MyApp* _tmp0_;
#line 45 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	_tmp0_ = my_app_new ();
#line 45 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	app = _tmp0_;
#line 46 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	result = g_application_run ((GApplication*) app, args_length1, args);
#line 46 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	_g_object_unref0 (app);
#line 46 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	return result;
#line 151 "Application.c"
}


int
main (int argc,
      char ** argv)
{
#line 44 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	return my_app_main (argv, argc);
#line 161 "Application.c"
}


static void
my_app_class_init (MyAppClass * klass)
{
#line 22 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	my_app_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/ahmed/Workspace/gtk-hello/src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication *)) my_app_real_activate;
#line 172 "Application.c"
}


static void
my_app_instance_init (MyApp * self)
{
}


GType
my_app_get_type (void)
{
	static volatile gsize my_app_type_id__volatile = 0;
	if (g_once_init_enter (&my_app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MyAppClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) my_app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MyApp), 0, (GInstanceInitFunc) my_app_instance_init, NULL };
		GType my_app_type_id;
		my_app_type_id = g_type_register_static (gtk_application_get_type (), "MyApp", &g_define_type_info, 0);
		g_once_init_leave (&my_app_type_id__volatile, my_app_type_id);
	}
	return my_app_type_id__volatile;
}



