

CC=g++


CFLAGS=-c	-Wall

all:	run

hello:	driver.o	database.o
	$(CC)	driver.o	database.o	-o	run

driver.o:	driver.cpp
	$(CC)	$(CFLAGS)	driver.cpp

database.o:	database.cpp
	$(CC)	$(CFLAGS)	database.cpp


clean:
	rm	-rf	*o	run
