CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++11
PATH_SRC = ./
SRCS = main.cpp
EXECS = $(SRCS:%.cpp=%)

all: $(EXECS)

%: $(PATH_SRC)%.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECS)

fclean: clean
	rm -f main
re: fclean all

.PHONY: all clean fclean re