NAME = canon

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re san

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

san: CXXFLAGS += -g -O0 -fsanitize=address,undefined,float-divide-by-zero,float-cast-overflow,signed-integer-overflow,shift,bounds,null,alignment,vla-bound,return
san: re