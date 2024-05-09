NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_display_file.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

