SORS	= ft_display_file.c
OBJS	= ${SORS:.c=.o}
NAME	= ft_display_file
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

%.o : %.c
	${CC} ${CFLAGS} -c $< -o ${OBJS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o
