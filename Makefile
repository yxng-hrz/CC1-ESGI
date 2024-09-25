##
## ESGI, 2024
## File description:
## authent
##

SRC	=	src/main.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Wextra -g3 -I ./includes

NAME	=	CCGuillaumeHouriez

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
