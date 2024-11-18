SRCS = ft_putchar.c ft_putstr.c ft_putvoid.c ft_putnbr.c \
      ft_putnbr_u.c ft_puthexa_u.c ft_puthexa_upper.c ft_printf.c 
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all : ${NAME}
       
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS} 

fclean: clean
	rm -f ${NAME} 

re: fclean all

.SECONDARY: ${OBJS} 