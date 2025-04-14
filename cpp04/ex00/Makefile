NAME = animal

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 \
			-Wpedantic -g -fsanitize=address

SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
