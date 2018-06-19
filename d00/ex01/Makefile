NAME = phonebook
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra
CC = clang++

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
