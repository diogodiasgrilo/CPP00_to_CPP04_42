NAME = materia
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wno-shadow -Wshadow -std=c++98
SRC = AMateria.cpp main.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp Dropped.cpp IMateriaSource.cpp MateriaSource.cpp 
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