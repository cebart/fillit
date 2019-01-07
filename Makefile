NAME = fillit
CC = gcc -Wall -Werror -Wextra
SRC = src/*.c
OBJ = *.o
INC = ./inc/

all: $(NAME)

$(NAME):
		$(CC) -I$(INC) -c $(SRC)
		$(CC) $(OBJ) -o $(NAME)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all
