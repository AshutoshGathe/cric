#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "score.c"
#include "fun.h"
static void team1_bat(GtkWidget *button, gpointer window) {
	GtkWidget *window_m, *player1, *player2, *player3, *team1, *table, *single, *two, *three, *four, *six, *score;/*variables*/
	GtkWidget *team2, *single1, *two1, *three1, *four1, *six1, *score1;
	GtkWidget *single2, *two2, *three2, *four2, *six2, *score2, *card;

	GtkWidget *bowl1, *bowl2, *bowl3;
	GtkWidget *overs1, *overs2, *overs3, *wic1, *wic2, *wic3;
	
	window_m = gtk_window_new(GTK_WINDOW_TOPLEVEL);

        //gtk_window_set_default_size(GTK_WINDOW(window_m),200, 200);
        gtk_window_set_title(GTK_WINDOW(window_m), "ADD SCORE");
        gtk_container_set_border_width(GTK_CONTAINER(window_m), 10);
	g_signal_connect(window, "delete_event", G_CALLBACK(gtk_main_quit), NULL);
	
	player1 = gtk_label_new("player1");
	player2 = gtk_label_new("player2");
	player3 = gtk_label_new("player3");

	bowl1 = gtk_label_new("bowler1"); 
	bowl2 = gtk_label_new("bowler2"); 
	bowl3 = gtk_label_new("bowler3"); 
	
	overs1 = gtk_button_new_with_label("overs");
	overs2 = gtk_button_new_with_label("overs");
	overs3 = gtk_button_new_with_label("overs");

	wic1 = gtk_button_new_with_label("wicket");
	wic2 = gtk_button_new_with_label("wicket");
	wic3 = gtk_button_new_with_label("wicket");

	team1 = gtk_label_new("TEAM1  BAT");
	team2 = gtk_label_new("TEAM2  BOWL");

	table = gtk_table_new(13, 7, TRUE);

	single = gtk_button_new_with_label("single");
	two = gtk_button_new_with_label("two");
	three = gtk_button_new_with_label("three");
	four = gtk_button_new_with_label("four");
	six = gtk_button_new_with_label("six");
	score = gtk_button_new_with_label("sum");

	single1 = gtk_button_new_with_label("single");
	two1 = gtk_button_new_with_label("two");
	three1 = gtk_button_new_with_label("three");
	four1 = gtk_button_new_with_label("four");
	six1 = gtk_button_new_with_label("six");
	score1 = gtk_button_new_with_label("sum");

	single2 = gtk_button_new_with_label("single");
	two2 = gtk_button_new_with_label("two");
	three2 = gtk_button_new_with_label("three");
	four2 = gtk_button_new_with_label("four");
	six2 = gtk_button_new_with_label("six");
	score2 = gtk_button_new_with_label("sum");

	overs1 = gtk_button_new_with_label("overs");
	overs2 = gtk_button_new_with_label("overs");
	overs3 = gtk_button_new_with_label("overs");
	card = gtk_button_new_with_label("card");

	gtk_table_attach_defaults(GTK_TABLE(table), team1, 0 ,4, 0, 1);

	gtk_table_attach_defaults(GTK_TABLE(table), player1, 0 , 1, 1, 2);
	gtk_table_attach_defaults(GTK_TABLE(table), single, 1, 2, 1, 2);
	gtk_table_attach_defaults(GTK_TABLE(table), two, 2, 3, 1, 2);
	gtk_table_attach_defaults(GTK_TABLE(table), three, 3, 4, 1, 2);
	gtk_table_attach_defaults(GTK_TABLE(table), four, 4, 5, 1, 2);
	gtk_table_attach_defaults(GTK_TABLE(table), six, 5, 6, 1, 2);
	gtk_table_attach_defaults(GTK_TABLE(table), score, 6, 7, 1, 2);

	gtk_table_attach_defaults(GTK_TABLE(table), player2, 0, 1, 2 ,3);
	gtk_table_attach_defaults(GTK_TABLE(table), single1 ,1, 2 , 2 ,3);
	gtk_table_attach_defaults(GTK_TABLE(table), two1, 2, 3, 2, 3 );
	gtk_table_attach_defaults(GTK_TABLE(table), three1,3, 4, 2, 3 );
	gtk_table_attach_defaults(GTK_TABLE(table), four1,4, 5, 2, 3);
	gtk_table_attach_defaults(GTK_TABLE(table), six1, 5, 6, 2, 3);
	gtk_table_attach_defaults(GTK_TABLE(table), score1, 6, 7, 2, 3);
	
	gtk_table_attach_defaults(GTK_TABLE(table), player3, 0, 1, 3, 4);
	gtk_table_attach_defaults(GTK_TABLE(table), single2, 1, 2, 3 ,4 );
	gtk_table_attach_defaults(GTK_TABLE(table), two2, 2, 3, 3, 4);
	gtk_table_attach_defaults(GTK_TABLE(table), three2, 3, 4, 3, 4);
	gtk_table_attach_defaults(GTK_TABLE(table), four2, 4, 5, 3, 4);
	gtk_table_attach_defaults(GTK_TABLE(table), six2, 5, 6, 3, 4);
	gtk_table_attach_defaults(GTK_TABLE(table), score2, 6, 7, 3, 4);
	
	gtk_table_attach_defaults(GTK_TABLE(table), team2, 0 , 4, 5, 6);
	
	gtk_table_attach_defaults(GTK_TABLE(table), bowl1, 0, 1, 7, 8);
	gtk_table_attach_defaults(GTK_TABLE(table), overs1, 1, 2, 7, 8);
	gtk_table_attach_defaults(GTK_TABLE(table), wic1, 2, 3, 7, 8);
	gtk_table_attach_defaults(GTK_TABLE(table), bowl2, 0, 1, 8, 9);
	gtk_table_attach_defaults(GTK_TABLE(table), overs2, 1, 2, 8, 9);
	gtk_table_attach_defaults(GTK_TABLE(table), wic2, 2, 3, 8, 9);
	gtk_table_attach_defaults(GTK_TABLE(table), bowl3, 0, 1, 9, 10);
	gtk_table_attach_defaults(GTK_TABLE(table), overs3, 1, 2, 9, 10);
	gtk_table_attach_defaults(GTK_TABLE(table), wic3, 2, 3, 9, 10);
	

	gtk_table_attach_defaults(GTK_TABLE(table), card, 0, 1, 11, 12);
	
	g_signal_connect(single, "clicked", G_CALLBACK(run_scored_so), window_m);
	g_signal_connect(two, "clicked", G_CALLBACK(run_scored_st), window_m);
	g_signal_connect(three, "clicked", G_CALLBACK(run_scored_sth), window_m);
	g_signal_connect(four, "clicked", G_CALLBACK(run_scored_sf), window_m);
	g_signal_connect(six, "clicked", G_CALLBACK(run_scored_ss), window_m);
	g_signal_connect(score, "clicked", G_CALLBACK(sum_scored_se), window_m);

	g_signal_connect(single1, "clicked", G_CALLBACK(run_scored_sao), window_m);
	g_signal_connect(two1, "clicked", G_CALLBACK(run_scored_sat), window_m);
	g_signal_connect(three1, "clicked", G_CALLBACK(run_scored_sath), window_m);
	g_signal_connect(four1, "clicked", G_CALLBACK(run_scored_saf), window_m);
	g_signal_connect(six1, "clicked", G_CALLBACK(run_scored_sas), window_m);
	g_signal_connect(score1, "clicked", G_CALLBACK(sum_scored_sae), window_m);

	g_signal_connect(single2, "clicked", G_CALLBACK(run_scored_sbo), window_m);
	g_signal_connect(two2, "clicked", G_CALLBACK(run_scored_sbt), window_m);
	g_signal_connect(three2, "clicked", G_CALLBACK(run_scored_sbth), window_m);
	g_signal_connect(four2, "clicked", G_CALLBACK(run_scored_sbf), window_m);
	g_signal_connect(six2, "clicked", G_CALLBACK(run_scored_sbs), window_m);
	g_signal_connect(score2, "clicked", G_CALLBACK(sum_scored_sbe), window_m);

	g_signal_connect(overs1, "clicked", G_CALLBACK(overs_bowl1), window_m);
	g_signal_connect(wic1, "clicked", G_CALLBACK(wicket_tak1), window_m);
	//g_signal_connect(overs3, "clicked", G_CALLBACK(wicket_tak3), window_m);
	//g_signal_connect(score2, "clicked", G_CALLBACK(overs_bowl1), window_m);
	//g_signal_connect(score2, "clicked", G_CALLBACK(overs_bowl2), window_m);
	//g_signal_connect(score2, "clicked", G_CALLBACK((overs_bowl3), window_m);

	g_signal_connect(card, "clicked", G_CALLBACK(card_as), window_m);

	gtk_container_add(GTK_CONTAINER(window_m), table);
	gtk_widget_show_all(window_m);
}


