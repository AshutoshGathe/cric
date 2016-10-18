#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu.c"
int main(int argc, char *argv[]) {
	gtk_init(&argc, &argv);/*initialize gtk*/
	GtkWidget *window, *menu_bar, *menu_item, *file_menu, *help_menu, *vbox, *button;/*variables*/	
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
        gtk_window_set_default_size(GTK_WINDOW(window),1920, 1080);
        gtk_window_set_title(GTK_WINDOW(window), "CRIC");
        gtk_container_set_border_width(GTK_CONTAINER(window), 10);
	
	g_signal_connect(window, "delete_event", G_CALLBACK(gtk_main_quit), NULL);

	menu_bar = gtk_menu_bar_new();
	file_menu = gtk_menu_new();
	help_menu = gtk_menu_new();

	menu_item=gtk_menu_item_new_with_label("NEW MATCH");
	gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item), file_menu);
	gtk_menu_shell_append(GTK_MENU_SHELL(menu_bar), menu_item);

	menu_item = gtk_menu_item_new_with_label("PREVIOUS");
	gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item), help_menu);
	gtk_menu_shell_append(GTK_MENU_SHELL(menu_bar), menu_item);
	
	menu_item = gtk_menu_item_new_with_label("ODI");
	gtk_menu_shell_append(GTK_MENU_SHELL(file_menu), menu_item);/*adding submenu to menu*/
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response_1), NULL);/*conencting menuitems for callback*/

	menu_item = gtk_menu_item_new_with_label("T20");
	gtk_menu_shell_append(GTK_MENU_SHELL(file_menu), menu_item);/*adding submenu to menu*/
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response_1), NULL);/*conencting menuitems for callback*/

	menu_item = gtk_menu_item_new_with_label("TEST");
	gtk_menu_shell_append(GTK_MENU_SHELL(file_menu), menu_item);/*adding submenu to menu*/
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response_1), NULL);/*conencting menuitems for callback*/
	
	menu_item = gtk_menu_item_new_with_label("PRE ODI");
	gtk_menu_shell_append(GTK_MENU_SHELL(help_menu), menu_item);
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response), NULL);/*conencting menuitems for callback*/

	menu_item = gtk_menu_item_new_with_label("PRE T20");
	gtk_menu_shell_append(GTK_MENU_SHELL(help_menu), menu_item);
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response), NULL);/*conencting menuitems for callback*/

	menu_item = gtk_menu_item_new_with_label("PRE TEST");
	gtk_menu_shell_append(GTK_MENU_SHELL(help_menu), menu_item);
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response), NULL);/*conencting menuitems for callback*/
	
	vbox = gtk_vbox_new(0, 0);
	button = gtk_button_new_with_label("click");
	/*gtk_widget_set_size_request(button,100, 100);*/
	gtk_box_pack_start(GTK_BOX(vbox), menu_bar, 0, 0, 0);
	gtk_box_pack_start(GTK_BOX(vbox), button, 0, 0, 0);	
	gtk_container_add(GTK_CONTAINER(window), vbox);
	gtk_widget_show_all(window);
	gtk_main();
	return 0;
}














