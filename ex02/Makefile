CC := g++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

# SRCS
SRCDIR := .
SRCS += $(SRCDIR)/Account.cpp
SRCS += $(SRCDIR)/tests.cpp

# 実行ファイル名
NAME = bank

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
