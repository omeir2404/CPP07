NAME    = ex00

CC = c++ -Wall -Werror -Wextra -std=c++98

SRC     = main.cpp


all:    $(NAME)

$(NAME):
		$(CC) $(SRC) -o $(NAME)

clean:
		rm -f $(OBJ)

run:	$(NAME)
		./$(NAME)

fclean:	clean
		rm -f $(NAME) val.log

mem: re 
	valgrind  --leak-check=full --log-file=val.log ./ex00


re:		fclean $(NAME)
