SRC			= main.c record_dict.c ft_memset.c malloc_dict.c free_dict.c is_number.c ft_strlen.c print_str.c print_str_with_enter.c convert_input.c check_zero.c

OBJS		= ${SRC:.c=.o}

NAME		= rush-02

RM			= rm -f

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
