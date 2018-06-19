NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra
CC = g++

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
