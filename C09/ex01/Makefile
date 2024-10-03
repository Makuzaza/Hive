# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 15:23:18 by makuznet          #+#    #+#              #
#    Updated: 2024/09/24 15:58:22 by makuznet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCNAME	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS	= ${addprefix ${SRCDIR}, ${SRCNAME}}

OBJS = ${SRCS:.c=.o}

SRCDIR	= ./srcs/
INCDIR	= ./includes/

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCDIR}

${NAME}: ${OBJS}
	@ar rc ${NAME} ${OBJS}
	@ranlib ${NAME}

all: ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all
