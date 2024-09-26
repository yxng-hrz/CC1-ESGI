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

GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

all: $(TARGET)
	@echo -e "$(GREEN)Build successful with no bug!$(RESET)"

$(TARGET): $(SRC)
	@echo -e "$(YELLOW)Compiling the code...$(RESET)"
	$(CC) $(CFLAGS) -I$(INC) -o $(TARGET) $(SRC)
	@echo -e "$(BLUE)$(TARGET) created.$(RESET)"

clean:
	@echo -e "$(RED)Cleaning...$(RESET)"
	rm -f $(TARGET)

re: clean all

.PHONY: all clean re

fclean: clean
	rm -f $(TARGET)
	@echo -e "$(RED)Fully cleaned!$(RESET)"
