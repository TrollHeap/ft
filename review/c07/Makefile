CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
NAME = c07

all: $(NAME)

$(NAME): $(OBJ) main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
