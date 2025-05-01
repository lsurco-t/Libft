# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/18 20:28:08 by lsurco-t          #+#    #+#              #
#    Updated: 2025/04/18 20:28:08 by lsurco-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
LDFLAGS = -lbsd

SRC = \
	src_1/ft_isalpha.c src_1/ft_isdigit.c src_1/ft_isalnum.c src_1/ft_isascii.c src_1/ft_isprint.c \
	src_1/ft_strlen.c src_1/ft_memset.c src_1/ft_bzero.c src_1/ft_memcpy.c src_1/ft_memmove.c \
	src_1/ft_strlcpy.c src_1/ft_strlcat.c src_1/ft_toupper.c src_1/ft_tolower.c src_1/ft_strchr.c src_1/ft_strrchr.c \
	src_1/ft_strncmp.c src_1/ft_memchr.c src_1/ft_memcmp.c src_1/ft_strnstr.c src_1/ft_atoi.c src_1/ft_calloc.c src_1/ft_strdup.c \
	src_2/ft_substr.c src_2/ft_strjoin.c src_2/ft_strtrim.c src_2/ft_split.c src_2/ft_itoa.c src_2/ft_strmapi.c src_2/ft_striteri.c \
	src_2/ft_putchar_fd.c src_2/ft_putstr_fd.c src_2/ft_putendl_fd.c src_2/ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

TEST_SRC := $(wildcard tests/test_*.c)
TEST_BIN := $(patsubst tests/%.c, tests/%, $(TEST_SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

tests: $(NAME) $(TEST_BIN)

$(TEST_BIN): tests/%: tests/%.c
	$(CC) $(CFLAGS) -I. $< $(NAME) -o $@ $(LDFLAGS)

run_tests: tests
	@for bin in $(TEST_BIN); do \
		echo "Running $$bin..."; \
		./$$bin || exit 1; \
		sleep 15; \
	done

test: all
	$(MAKE) -C tests

clean:
	$(RM) $(OBJ)
	$(MAKE) -C tests clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C tests fclean

re tests: fclean all
	$(MAKE) -C tests
	
re: fclean all

.PHONY: all clean fclean re
