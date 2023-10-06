SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INC	= includes/ft.h

LIB	= libft.a

OBJS	= ${SRCS:.c=.o}

.PHONY	= all clean fclean re

all:	${LIB}

${LIB}:	${OBJS}
	ar -r $@ $^

%.o:	%.c
	gcc -Wall -Wextra -Werror -c $< -I ${INC} -o $@

clean:
	rm -f ${OBJS}

fclean:
	rm -rf ${LIB} ${OBJS}

re:	fclean all
