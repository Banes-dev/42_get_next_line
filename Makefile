CC = cc

CFLAGS = -Wall -Wextra -Werror  -D BUFFER_SIZE=n

NAME = get_next_line.a

FUNC =	get_next_line.c get_next_line_utils.c

OBJS = ${FUNC:.c=.o} 


.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rsc ${NAME} ${OBJS}

all: 	${NAME}

clean:	
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re