NAME = fixed2
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wno-shadow -Wshadow -std=c++98
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re