CC := g++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

SRCDIR := .
SRCS += $(SRCDIR)/PhoneBook.cpp
SRCS += $(SRCDIR)/Contact.cpp

NAME = phonebook

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
