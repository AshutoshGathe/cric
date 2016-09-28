#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>
static void open_dialog(GtkWidget *button, gpointer window) {
	GtkWidget *dialog,*label;
	dialog = gtk_dialog_new_with_buttons("STATS", GTK_WINDOW(window),GTK_DIALOG_MODAL, GTK_STOCK_OK, GTK_RESPONSE_OK, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,NULL);
	label=gtk_label_new("New");
	/*hbox = gtk_hbox_new(0, 0);*/
	/*gtk_box_pack_start(GTK_BOX(hbox), label, 0,0,0);*/

	gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog)->vbox),label, 0, 0, 0);
	gtk_widget_show_all(dialog);
	gint response = gtk_dialog_run(GTK_DIALOG(dialog));
	if(response == GTK_RESPONSE_OK) {
		GtkWidget *window , *label, *vbox, *text_view;
		GdkFont *fixed_font;
		window = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
		gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
                gtk_window_set_default_size(GTK_WINDOW(window),1000, 1000);
               	gtk_window_set_title(GTK_WINDOW(window), "SCORECARD");
                gtk_container_set_border_width(GTK_CONTAINER(window), 30);
		g_signal_connect(window, "delete_event", G_CALLBACK(gtk_main_quit), NULL);
	
		/*text_view = gtk_text_view_new();
		fixed_font = gdk_font_load("-misc-fixed-medium-r-*-*-*-140-*-*-*-*-*-*");
		gtk_widget_show(text_view);*/
		char b[1024];
	
		char c[1024];
		int i;
		FILE *fp;
		fp = fopen("cric2.c", "r");
		while(!feof(fp)) {
			fgets(c, 1024, fp);
			i++;
			printf("%s", c);
			//strcpy(b,c);
	
		}
	
		
		label = gtk_label_new(c);
	
		gtk_container_add(GTK_CONTAINER(window),label);
		
		gtk_widget_show_all(window);
		

	}
/*for yaml*/else if(response == GTK_RESPONSE_CANCEL) {
		g_print("thghg");
	gtk_widget_destroy(dialog);
	
	}
}

static void menu_response(GtkWidget *menu_item, gpointer data) {

		if(strcmp(gtk_menu_item_get_label(GTK_MENU_ITEM(menu_item)), "PRE ODI") == 0) {
			GtkWidget *window, *vbox;
				
			GtkWidget *match1;
			GtkWidget *match2;
			GtkWidget *match3;
			GtkWidget *match4;
			GtkWidget *match5;
			 
			window = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
			gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
                	gtk_window_set_default_size(GTK_WINDOW(window),500, 500);
               		gtk_window_set_title(GTK_WINDOW(window), "ODI's");
                	gtk_container_set_border_width(GTK_CONTAINER(window), 30);

               		vbox = gtk_vbox_new(TRUE, 5);
      		
      			match1 = gtk_button_new_with_label("match1");
			match2 = gtk_button_new_with_label("match2");
			match3 = gtk_button_new_with_label("match3");
			match4 = gtk_button_new_with_label("match4");
			match5 = gtk_button_new_with_label("match5");
			
			g_signal_connect(match1, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match2, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match3, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match4, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match5, "clicked", G_CALLBACK(open_dialog), window);	
			
			 gtk_box_pack_start(GTK_BOX(vbox), match1, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match2, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match3, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match4, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match5, TRUE, TRUE, 0);
			
			 gtk_container_add(GTK_CONTAINER(window), vbox);
			 gtk_widget_show_all(window);

		}
		
		else if(strcmp(gtk_menu_item_get_label(GTK_MENU_ITEM(menu_item)), "PRE T20") == 0) {
			GtkWidget *window, *vbox;
				
			GtkWidget *match1;
			GtkWidget *match2;
			GtkWidget *match3;
			GtkWidget *match4;
			GtkWidget *match5;
			 
			window = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
			gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
                	gtk_window_set_default_size(GTK_WINDOW(window),500, 500);
               		gtk_window_set_title(GTK_WINDOW(window), "T20's");
                	gtk_container_set_border_width(GTK_CONTAINER(window), 30);

               		vbox = gtk_vbox_new(TRUE, 5);
      		
      			match1 = gtk_button_new_with_label("match1");
			match2 = gtk_button_new_with_label("match2");
			match3 = gtk_button_new_with_label("match3");
			match4 = gtk_button_new_with_label("match4");
			match5 = gtk_button_new_with_label("match5");
			
			g_signal_connect(match1, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match2, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match3, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match4, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match5, "clicked", G_CALLBACK(open_dialog), window);
			
			 gtk_box_pack_start(GTK_BOX(vbox), match1, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match2, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match3, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match4, TRUE, TRUE, 0);
                         gtk_box_pack_start(GTK_BOX(vbox), match5, TRUE, TRUE, 0);


					
			 gtk_container_add(GTK_CONTAINER(window), vbox);
			 gtk_widget_show_all(window);
		}
		
		else if(strcmp(gtk_menu_item_get_label(GTK_MENU_ITEM(menu_item)), "PRE TEST") == 0) {
			GtkWidget *window, *vbox;
				
			GtkWidget *match1;
			GtkWidget *match2;
			GtkWidget *match3;
			GtkWidget *match4;
			GtkWidget *match5;
			 
			window = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
			gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
                	gtk_window_set_default_size(GTK_WINDOW(window),500, 500);
               		gtk_window_set_title(GTK_WINDOW(window), "Test's");
                	gtk_container_set_border_width(GTK_CONTAINER(window), 30);

               		vbox = gtk_vbox_new(TRUE, 5);
      		
      			match1 = gtk_button_new_with_label("match1");
			match2 = gtk_button_new_with_label("match2");
			match3 = gtk_button_new_with_label("match3");
			match4 = gtk_button_new_with_label("match4");
			match5 = gtk_button_new_with_label("match5");
			
			g_signal_connect(match1, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match2, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match3, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match4, "clicked", G_CALLBACK(open_dialog), window);
			g_signal_connect(match5, "clicked", G_CALLBACK(open_dialog), window);
			 
			gtk_box_pack_start(GTK_BOX(vbox), match1, TRUE, TRUE, 0);
                        gtk_box_pack_start(GTK_BOX(vbox), match2, TRUE, TRUE, 0);
                        gtk_box_pack_start(GTK_BOX(vbox), match3, TRUE, TRUE, 0);
                        gtk_box_pack_start(GTK_BOX(vbox), match4, TRUE, TRUE, 0);
                        gtk_box_pack_start(GTK_BOX(vbox), match5, TRUE, TRUE, 0);


					
			 gtk_container_add(GTK_CONTAINER(window), vbox);
			 gtk_widget_show_all(window);
		}
		
		
}
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
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response), NULL);/*conencting menuitems for callback*/

	menu_item = gtk_menu_item_new_with_label("T20");
	gtk_menu_shell_append(GTK_MENU_SHELL(file_menu), menu_item);/*adding submenu to menu*/
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response), NULL);/*conencting menuitems for callback*/

	menu_item = gtk_menu_item_new_with_label("TEST");
	gtk_menu_shell_append(GTK_MENU_SHELL(file_menu), menu_item);/*adding submenu to menu*/
	g_signal_connect(menu_item, "activate", G_CALLBACK(menu_response), NULL);/*conencting menuitems for callback*/
	
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















