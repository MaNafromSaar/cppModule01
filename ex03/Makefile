CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++11
PATH_SRC = ./
HEADERS = Weapon.hpp\
		HumanA.hpp\
		HumanB.hpp
SRCS = main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp
OBJS = $(SRCS:.cpp=.o)
EXECS = battle

all: $(EXECS)

$(EXECS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: $(PATH_SRC)%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECS) $(OBJS)

fclean: clean
	rm -f battle $(OBJS)
re: fclean all

.PHONY: all clean fclean re