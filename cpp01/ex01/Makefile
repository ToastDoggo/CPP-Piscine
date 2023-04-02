NAME = zombieHorde

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =	./main.cpp			\
		./Zombie.cpp		\
		./zombieHorde.cpp
OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
	@echo "Compiled succesfully!"

clean:
	rm $(OBJ)
	@echo "Object files are gone forever."
fclean: clean
	rm -f $(NAME)
	@echo "Executables are gone too!"
re: fclean all
	@echo "Compiling again was succesful!"

.PHONY: all clean fclean re