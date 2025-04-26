# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 21:57:31 by lsurco-t          #+#    #+#              #
#    Updated: 2025/04/26 22:46:23 by lsurco-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ../libft.a
INCLUDES = -I../libft

TESTS_SRC = $(wildcard test_*.c)
TESTS_BIN = $(TESTS_SRC:.c=)

all: $(TESTS_BIN)

$(TESTS_BIN): %: %.c
	$(CC) $(CFLAGS) $(INCLUDES) $< $(LIBFT) -o $@

%: test_ft_% 
	$(MAKE) test_ft_%

clean:
	rm -f $(TESTS_BIN)

fclean: clean
	rm -f $(LIBFT)

re: fclean all

.PHONY: all clean fclean re

