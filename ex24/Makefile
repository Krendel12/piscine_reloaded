NAME=libft.a

CC=gcc

CFLAGS=-Wall -Werror -Wextra

HEADERS=-I includes/

SRC=srcs/*.c

all:
	$(CC) $(CFLAGS) -c $(SRC) $(HEADERS)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all