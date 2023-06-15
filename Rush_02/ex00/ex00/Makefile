NAME = rush-02
SRC = *.c

$(NAME):
	gcc -Wall -Werror -Wextra -o ${NAME} ${SRC}

all: ${NAME}
clean: fclean
fclean:
	rm -f ${NAME}
re: fclean all