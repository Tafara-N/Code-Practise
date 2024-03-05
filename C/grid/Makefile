CC = gcc
SRC = $(wildcard *.c) -lcs50
OBJ = $(SRC:.c=.o)
NAME = size
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic
LFLAGS = -lcs50

all: $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

cleanobj:
	@$(RM) -f  $(OBJ)

fclean: clean oclean

re: fclean all