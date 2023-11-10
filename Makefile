CC = cc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42

NAME = get_next_line.a

FUNC = get_next_line.c get_next_line_utils.c
BONUS = get_next_line_bonus.c get_next_line_utils_bonus.c

OBJS = ${FUNC:.c=.o}
OBJSBONUS = ${BONUS:.c=.o}

JAJ = ${FUNC} ${BONUS}

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar -rsc ${NAME} ${OBJS}

bonus: ${JAJ}
	ar -rsc ${NAME} ${JAJ}

clean:
	rm -f ${OBJS} ${OBJSBONUS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
