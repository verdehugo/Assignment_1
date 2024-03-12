# Makefile for the doubly linked list program

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SOURCES = d_linked_list.h dll.c 
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = my_program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

