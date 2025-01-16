CC := g++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

# SRCS
SRCDIR := .
SRCS += $(SRCDIR)/PhoneBook.cpp
SRCS += $(SRCDIR)/Contact.cpp

# 実行ファイル名
NAME = phonebook

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
