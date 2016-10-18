#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu.h"
#include "fun.c"
static void data_window(GtkWidget *button, gpointer window) {
	GtkWidget *window_m, *vbox, *team1bat, *team2bat;
	window_m = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
        gtk_window_set_default_size(GTK_WINDOW(window),1000, 500);
        gtk_window_set_title(GTK_WINDOW(window), "MATCH 1");
        gtk_container_set_border_width(GTK_CONTAINER(window), 30);
	
	team1bat = gtk_button_new_with_label("TEAM1 BAT");
	team2bat = gtk_button_new_with_label("TEAM2 BAT");
	//team1bow = gtk_button_new_with_label("TEAM1 BOWL");
	//team2bow = gtk_button_new_with_label("TEAM2 BOWl");
	
	vbox = gtk_vbox_new(TRUE, 2);

	gtk_box_pack_start(GTK_BOX(vbox), team1bat, TRUE, TRUE, 5);
	gtk_box_pack_start(GTK_BOX(vbox), team2bat, TRUE, TRUE, 5);
	//gtk_box_pack_start(GTK_BOX(vbox), team1bow, TRUE, TRUE, 0);/*think clicking out wihout cross*/
	//gtk_box_pack_start(GTK_BOX(vbox), team2bow, TRUE, TRUE, 0);

	g_signal_connect(team1bat, "clicked", G_CALLBACK(team1_bat), window_m);
	//g_signal_connect(team2bat, "clicked", G_CALLBACK(team2_bat), window_m);
	//g_signal_connect(team1bow, "clicked", G_CALLBACK(team1_bow), window_m);
	//g_signal_connect(team2bow, "clicked", G_CALLBACK(team2_bow), window_m);


	gtk_container_add(GTK_CONTAINER(window_m), vbox);
	gtk_widget_show_all(window_m);
}

static void data_window_1(GtkWidget *button, gpointer window) {
	GtkWidget *window_m, *vbox, *team1bat, *team2bat, *team1bow, *team2bow;
	window_m = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
        gtk_window_set_default_size(GTK_WINDOW(window),500, 500);
        gtk_window_set_title(GTK_WINDOW(window), "ODI's");
        gtk_container_set_border_width(GTK_CONTAINER(window), 30);
	
	team1bat = gtk_button_new_with_label("TEAM1 BAT");
	team2bat = gtk_button_new_with_label("TEAM2 BAT");
	team1bow = gtk_button_new_with_label("TEAM1 BOWL");
	team2bow = gtk_button_new_with_label("TEAM2 BOWl");
	
	vbox = gtk_vbox_new(TRUE, 2);

	gtk_box_pack_start(GTK_BOX(vbox), team1bat, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), team2bat, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), team1bow, TRUE, TRUE, 0);/*think clicking out wihout cross*/
	gtk_box_pack_start(GTK_BOX(vbox), team2bow, TRUE, TRUE, 0);

	gtk_container_add(GTK_CONTAINER(window_m), vbox);
	gtk_widget_show_all(window_m);
}

static void data_window_2(GtkWidget *button, gpointer window) {
	GtkWidget *window_m, *vbox, *team1bat, *team2bat, *team1bow, *team2bow;
	window_m = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
        gtk_window_set_default_size(GTK_WINDOW(window),500, 500);
        gtk_window_set_title(GTK_WINDOW(window), "ODI's");
        gtk_container_set_border_width(GTK_CONTAINER(window), 30);
	
	team1bat = gtk_button_new_with_label("TEAM1 BAT");
	team2bat = gtk_button_new_with_label("TEAM2 BAT");
	team1bow = gtk_button_new_with_label("TEAM1 BOWL");
	team2bow = gtk_button_new_with_label("TEAM2 BOWl");
	
	vbox = gtk_vbox_new(TRUE, 2);

	gtk_box_pack_start(GTK_BOX(vbox), team1bat, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), team2bat, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), team1bow, TRUE, TRUE, 0);/*think clicking out wihout cross*/
	gtk_box_pack_start(GTK_BOX(vbox), team2bow, TRUE, TRUE, 0);

	gtk_container_add(GTK_CONTAINER(window_m), vbox);
	gtk_widget_show_all(window_m);
}
static void menu_response_1(GtkWidget *menu_item, gpointer data) {
	if(strcmp(gtk_menu_item_get_label(GTK_MENU_ITEM(menu_item)), "ODI") == 0) {
		GtkWidget *window, *label, *vbox;
		GtkWidget *match1, *match2, *match3;
		window = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        				
		gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
                gtk_window_set_default_size(GTK_WINDOW(window),500, 500);
               	gtk_window_set_title(GTK_WINDOW(window), "ODI");
                gtk_container_set_border_width(GTK_CONTAINER(window), 30);

		label = gtk_label_new("MATCHES");

		match1 = gtk_button_new_with_label("Match 1");
		match2 = gtk_button_new_with_label("Match 2");
		match3 = gtk_button_new_with_label("Match 3");
	
		vbox = gtk_vbox_new(TRUE, 5);

		gtk_box_pack_start(GTK_BOX(vbox), label, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(vbox), match1, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(vbox), match2, TRUE, TRUE, 0);
		gtk_box_pack_start(GTK_BOX(vbox), match3, TRUE, TRUE, 0);
		
		g_signal_connect(match1, "clicked", G_CALLBACK(data_window), window);
		g_signal_connect(match2, "clicked", G_CALLBACK(data_window_1), window);
		g_signal_connect(match3, "clicked", G_CALLBACK(data_window_2), window);
		gtk_container_add(GTK_CONTAINER(window), vbox);
		gtk_widget_show_all(window);	
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
               		gtk_window_set_title(GTK_WINDOW(window), " PRE ODI's");
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
               		gtk_window_set_title(GTK_WINDOW(window), " PRE T20's");
                	gtk_container_set_border_width(GTK_CONTAINER(window), 30);
			g_signal_connect(window, "delete_event", G_CALLBACK(gtk_main_quit), NULL);

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
               		gtk_window_set_title(GTK_WINDOW(window), " PRE TEST's");
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
static void open_dialog(GtkWidget *button, gpointer window) {
	GtkWidget *dialog;
	//hbox = gtk_hbox_new(0, 0);
	dialog = gtk_dialog_new_with_buttons("STATS", GTK_WINDOW(window),GTK_DIALOG_MODAL, GTK_STOCK_OK, GTK_RESPONSE_OK, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,NULL);
	GtkWidget *window1, *label;
	label = gtk_label_new("new");
	gtk_box_pack_start(GTK_BOX(GTK_DIALOG(dialog)->vbox),label, 0, 0, 0);
	gtk_widget_show_all(dialog);
	gint response = gtk_dialog_run(GTK_DIALOG(dialog));
	if(response == GTK_RESPONSE_OK) {
		window1 = gtk_window_new(GTK_WINDOW_TOPLEVEL);		        
		gtk_window_set_position(GTK_WINDOW(window1), GTK_WIN_POS_CENTER);
                gtk_window_set_default_size(GTK_WINDOW(window1),1000, 1000);
               	gtk_window_set_title(GTK_WINDOW(window1), "SCORECARD");
                gtk_container_set_border_width(GTK_CONTAINER(window1), 30);
		/*int fp;
		char a[100][100],ch;
		int x, y;
		fp = open("cric2.txt", "r");
		if(fp== -1) {
			printf("nofile");
		}
		while(read(fp,&ch, sizeof(char))) {
			if(ch == '\n') {
				a[x][y] = ch;
			}
			if(ch == '\t') {
				printf("\t");
			x++;
			y = 0;
			}
		}
		x++;
		y = 0;	
		label1 = gtk_label_new("kjk");
		gtk_container_add(GTK_CONTAINER(window1),label1);*/
		gtk_widget_show_all(window1);
		
		
}
}
