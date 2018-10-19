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

public class MyApp : Gtk.Application {

    public MyApp(){
        Object(
            application_id: "com.github.Ahmed-Habbachi.helloValaAndGtk",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }

    protected override void activate(){
        var label = new Gtk.Label(_("Hello Again Wolrd!"));
        
        var main_window = new Gtk.ApplicationWindow(this);
        main_window.default_height = 300;
        main_window.default_width = 300;
        main_window.title = _("HELLO World");
        
        main_window.add(label);
        
        main_window.show_all();
    }

    public static int main (string[] args){
        var app = new MyApp();
        return app.run(args);
    }
}
