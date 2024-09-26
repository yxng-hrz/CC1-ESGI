##
## ESGI, 2024
## File description:
## Makefile
##

CC = gcc

CFLAGS = -Wall -Wextra -g

TARGET = db_program

SRC = src/main.c	\
	  src/tableline.c	\
	  src/binarytree.c	\

INC = includes/

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -I$(INC) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

re: clean all

.PHONY: all clean re

fclean: clean
	rm -f $(TARGET)
