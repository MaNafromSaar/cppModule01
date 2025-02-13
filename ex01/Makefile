CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++11
PATH_SRC = ./
HEADERS = Zombie.hpp
SRCS = main.cpp\
	Zombie.cpp\
	ZombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
EXECS = TheLivingDead

all: $(EXECS)

$(EXECS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: $(PATH_SRC)%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECS)

fclean: clean
	rm -f $(OBJS) $(EXECS)
re: fclean all

.PHONY: all clean fclean re