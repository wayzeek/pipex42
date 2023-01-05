
SRCS = ./srcs/main.c ./srcs/utils.c

OBJS = ${SRCS:.c=.o}

HEADERS = ./includes/pipex.h

NAME = pipex

CFLAGS = -Wall -Wextra -Werror -O3

${NAME}:	${OBJS} ${HEADERS}
			make -C ./libft
			$(CC) ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS} output.txt

fclean:	clean
		make fclean -C ./libft
		${RM} ${NAME}

re:		fclean
		$(MAKE) all

.PHONY:	all clean fclean re 