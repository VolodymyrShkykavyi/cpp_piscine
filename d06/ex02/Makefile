NAME = identify
SRC = main.cpp Base.cpp
OBJ = $(SRC:.cpp=.o)
CC = clang++
FLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all