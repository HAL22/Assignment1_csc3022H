

CC=g++


CFLAGS=-c	-Wall

all:	r

r:	driver.o	database.o
	$(CC)	driver.o	database.o	-o	r

driver.o:	driver.cpp
	$(CC)	$(CFLAGS)	driver.cpp

database.o:	database.cpp	database.h	Struct.h
	$(CC)	$(CFLAGS)	database.cpp


clean:
	rm	-rf	*o	run
