CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++11
PATH_SRC = ./
HEADERS = replace.hpp
SRCS = main.cpp\
		replace.cpp
OBJS = $(SRCS:.cpp=.o)
EXECS = replaceString

all: $(EXECS)

$(EXECS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: $(PATH_SRC)%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECS) $(OBJS)

fclean: clean
	rm -f replaceString $(OBJS)
re: fclean all

.PHONY: all clean fclean re