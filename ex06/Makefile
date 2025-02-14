CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++11
PATH_SRC = ./
HEADERS = Karen.hpp
SRCS = main.cpp\
		Karen.cpp
OBJS = $(SRCS:.cpp=.o)
EXECS = KarenFilter

all: $(EXECS)

$(EXECS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: $(PATH_SRC)%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECS) $(OBJS)

fclean: clean
	rm -f Karen $(OBJS)
re: fclean all

.PHONY: all clean fclean re