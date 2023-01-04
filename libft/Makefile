# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcart <vcart@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:05:38 by vcart             #+#    #+#              #
#    Updated: 2023/01/04 15:02:51 by vcart            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_itoa.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_split.c ./ft_strchr.c ./ft_strdup.c ./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_substr.c ./ft_tolower.c ./ft_toupper.c ./ft_strmapi.c ./ft_strtrim.c ./ft_striteri.c 

OBJS = ${SRCS:.c=.o}

HEADERS = libft.h

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${HEADERS}
	${CC} ${CFLAGS} -c $< -o $@ -I .

${NAME}:	${OBJS} 
			$(AR) rcs ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJSBNS}
			$(AR) rcs ${NAME} ${OBJS} ${OBJSBNS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBNS}

fclean:	clean
		${RM} ${NAME}

re:		fclean
		$(MAKE) all

.PHONY:	all clean fclean re bonus
