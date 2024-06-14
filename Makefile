# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalissa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 19:59:11 by aalissa           #+#    #+#              #
#    Updated: 2023/12/08 19:24:06 by aalissa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra 
FILE_NAME = libftprintf.a

ALL_FILES =	ft_printf.c	ft_print_format.c	ft_putchar.c	ft_putstr.c	ft_putnbr.c	ft_putptr.c	ft_addresssan.c

SRC_FILES = $(filter-out ft_lst%.c, $(ALL_FILES))
OBJ_FILES = $(patsubst %.c, %.o, $(SRC_FILES))


all: $(FILE_NAME)

$(FILE_NAME): $(OBJ_FILES)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -f $(FILE_NAME)

re: fclean all

.PHONY: all clean fclean re bonus
