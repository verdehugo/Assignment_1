CC = gcc
CFLAGS = -Wall -std=c99

TARGET = my_program
SRC = main.c d_linked_list.c MYDLLInit.c MYDLLInsert.c MYDLLFind.c MYDLLRremove.c MYDLLFindNext.c MYDLLFindPrev.c MYDLLFindPrev.c

OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(TARGET)
