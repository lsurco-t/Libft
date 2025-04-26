# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 21:57:31 by lsurco-t          #+#    #+#              #
#    Updated: 2025/04/26 21:57:48 by lsurco-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_program
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ../libft/libft.a

SRC = main.c

all:
	$(CC) $(CFLAGS) -I../libft $(SRC) $(LIBFT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
