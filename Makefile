try: 
	cc cricket.c `pkg-config --cflags gtk+-2.0` `pkg-config --libs gtk+-2.0` -o cricket -Wall
	./cricket
