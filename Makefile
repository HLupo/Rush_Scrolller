##
## Makefile for Makefile in /home/Tekaa/Epitech/lib
## 
## Made by lupo hugo
## Login   <hugo.lupo@epitech.eu>
## 
## Started on  Sun Feb 26 15:43:36 2017 lupo hugo
## Last update Mon Apr  3 00:12:10 2017 lupo hugo
##

GCC	=	gcc -g3 -o

NAME	=	scroller

SRC	=	my_init.c		\
		my_create_sprite.c	\
		my_background.c		\
		my_transmove.c		\
		my_todo.c		\
		my_move.c		\
		move.c			\
		init_game.c		\
		keys.c			\
		menu.c			\
		music.c			\
		init_positions.c	\
		my_loop_menu.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I include

LIB	=

RM	=	rm -f

CFLAGS	+=	-W -Wall -Werror -Wextra -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
		$(GCC) $(NAME) $(LIB) $^ -lc_graph_prog_full

%.o:		%.c
		$(GCC) $@ $(INC) $(CFLAGS) -c $^

clean:
		find . -name '*~' -delete -o -name  '#*#' -type f -delete -o -name "*.o" -delete

fclean: 	clean
		$(RM) $(NAME)

re:		fclean all
