#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "score.h"
int x=1, y = 2, z = 3, a = 4,b = 6, over = 1, wic = 1;
int sum = 0, sum1 = 0, sum2 = 0, p, q , r, sum3 = 0, qw;
int wcount = 0, ocount = 0;
typedef struct stack {
	int a[100];
	int i;
}stack;
typedef struct stack1 {
	int a[100];
	int i;
}stack1;
typedef struct stack2 {
	int a[100];
	int i;
}stack2;
void push(stack *s, int n) {
	s->a[s->i]= n;
	(s->i)++;
}
int pop(stack *s) {
	int t = s->a[s->i - 1];
	(s->i)--;
	return t;
}
int empty(stack *s) {
	if(s->i == 0);
	return 0;
}
stack s;

void push1(stack1 *s, int m) {
	s->a[s->i]= m;
	(s->i)++;
}
int pop1(stack1 *s) {
	int t = s->a[s->i - 1];
	(s->i)--;
	return t;
}
int empty1(stack1 *s) {
	if(s->i == 0);
	return 0;
}
stack1 s1;
void push2(stack2 *s, int o) {
	s->a[s->i]= o;
	(s->i)++;
}
int pop2(stack2 *s) {
	int t = s->a[s->i - 1];
	(s->i)--;
	return t;
}
int empty2(stack2 *s) {
	if(s->i == 0);
	return 0;
}
stack2 s2;
	
static void run_scored_so(GtkWidget *button, gpointer window) {
	push(&s, x);
	g_print("%d\t", x);
	if(!empty(&s)) {
		sum = pop(&s);
		p = sum + p;
	}
		
}
static void run_scored_st(GtkWidget *button, gpointer window) {
	push(&s, y);
	g_print("%d\t", y);
	//y++;
	if(!empty(&s)) {
		sum = pop(&s);
		p = sum + p;
	}
		
}
static void run_scored_sth(GtkWidget *button, gpointer window) {
	push(&s, z);
	g_print("%d\t", z);
	
	if(!empty(&s)) {
		sum = pop(&s);
		p = sum + p;
	}
		
}
static void run_scored_sf(GtkWidget *button, gpointer window) {
	push(&s, a);
	g_print("%d\t", a);
	if(!empty(&s)) {
		sum = pop(&s);
		p = sum + p;
	}
		
}
static void run_scored_ss(GtkWidget *button, gpointer window) {
	push(&s, b);
	g_print("%d\t", b);
	
	if(!empty(&s)) {
		sum = pop(&s);
		p = sum + p;
	}
		
}
static void sum_scored_se(GtkWidget *button, gpointer window) {/*button click once to print sum*/
	g_print("%d\n", p);
}
static void run_scored_sao(GtkWidget *button, gpointer window) {
	push1(&s1, x);
	g_print("%d\t", x);
	if(!empty1(&s1)) {
		sum1 = pop1(&s1);
		q = sum1 + q;
	}
		
}
static void run_scored_sat(GtkWidget *button, gpointer window) {
	push1(&s1, y);
	g_print("%d\t", y);
	//y++;
	if(!empty1(&s1)) {
		sum1 = pop1(&s1);
		q = sum1 + q;
	}
		
}
static void run_scored_sath(GtkWidget *button, gpointer window) {
	push1(&s1, z);
	g_print("%d\t", z);
	
	if(!empty1(&s1)) {
		sum1 = pop1(&s1);
		q = sum1 + q;
	}
		
}
static void run_scored_saf(GtkWidget *button, gpointer window) {
	push1(&s1, a);
	g_print("%d\t", a);
	if(!empty1(&s1)) {
		sum1 = pop1(&s1);
		q = sum1 + q;
	}
		
}
static void run_scored_sas(GtkWidget *button, gpointer window) {
	push1(&s1, b);
	g_print("%d\t", b);
	
	if(!empty(&s)) {
		sum1 = pop1(&s1);
		q = sum1 + q;
	}
		
}
static void sum_scored_sae(GtkWidget *button, gpointer window) {/*button click once to print sum*/
	g_print("%d\n", q);
}
static void run_scored_sbo(GtkWidget *button, gpointer window) {
	push2(&s2, x);
	g_print("%d\t", x);
	if(!empty2(&s2)) {
		sum2 = pop2(&s2);
		r = sum2 +r;
	}
		
}
static void run_scored_sbt(GtkWidget *button, gpointer window) {
	push2(&s2, y);
	g_print("%d\t", y);
	//y++;
	if(!empty2(&s2)) {
		sum2 = pop2(&s2);
		r = sum2 + r;
	}
		
}
static void run_scored_sbth(GtkWidget *button, gpointer window) {
	push2(&s2, z);
	g_print("%d\t", z);
	
	if(!empty2(&s2)) {
		sum2 = pop2(&s2);
		r = sum2 + r;
	}
		
}
static void run_scored_sbf(GtkWidget *button, gpointer window) {
	push2(&s2, a);
	g_print("%d\t", a);
	if(!empty2(&s2)) {
		sum2 = pop2(&s2);
		r = sum2 + r;
	}
		
}
static void run_scored_sbs(GtkWidget *button, gpointer window) {
	push2(&s2, b);
	g_print("%d\t", b);
	
	if(!empty2(&s2)) {
		sum2 = pop2(&s2);
		r = sum2 + r;
	}
		
}
static void sum_scored_sbe(GtkWidget *button, gpointer window) {
	g_print("%d", r);
}
typedef struct sbowl {
	int a[100];
	int i;
}sbowl;

void spush(sbowl *bb, int w) {
	bb->a[bb->i]= w;
	(bb->i)++;

}
int spop(sbowl *bb) {
	int t = bb->a[bb->i - 1];
	(bb->i)--;
	return t;
}
int sempty(sbowl *bb) {
	if(bb->i == 0);
	return 0;
}
sbowl bb;
typedef struct sbowl1 {
	int a[100];
	int i;
}sbowl1;

void spush1(sbowl1 *bb, int g) {
	bb->a[bb->i]= g;
	(bb->i)++;

}
int spop1(sbowl1 *bb) {
	int t = bb->a[bb->i - 1];
	(bb->i)--;
	return t;
}
int sempty1(sbowl1 *bb) {
	if(bb->i == 0);
	return 0;
}
sbowl1 bb1;


static void wicket_tak1(GtkWidget *button, gpointer window) {
	int wic1 = 0;
	spush(&bb, wic);
	wcount++;
	if(!sempty(&bb)) {
		wic1 = spop(&bb);
		wic = wic1 + wic;
	}

	/*if(wcount > 9) {
		GtkWidget *dialog;
		dialog = gtk_message_dialog_new;
			{
			window;
			GTK_DIALOG_DESTROY_WITH_PARENT;
			GTK_MESSAGE_INFO;
			GTK_BUTTONS_wic1, "sorry more than 10 wickets"
			};
	} */			
}
static void overs_bowl1(GtkWidget *button, gpointer window) {
	int over1 = 0;
	spush1(&bb1, over);
	if(!sempty1(&bb1)) {
		over1 = spop1(&bb1);
		over = over1 + over;
	}
}	

typedef struct queue {
	int qa[100];
	int head, tail;
}queue;

void enqueue(queue *q, int p) {
	q->tail++;
	q->qa[q->tail] = p;
	
}
int dequeue(queue*q) {
	int s;
	s = q->qa[q->head];
	q->head++;
	return s;
}
int queueempty(queue *q) {
	if(q->head == -1);
	return 0;
}
queue qq;
static void card_as(GtkWidget *button, gpointer window) {
	enqueue(&qq, p);
	g_print("player1\t");
	g_print("%d", p);
	if(!queueempty(&qq)) {
		sum3 = dequeue(&qq);
		qw = sum + qw;		
	
}
}

