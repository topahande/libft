#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 12:53:31 by htopa             #+#    #+#              #
#    Updated: 2024/04/22 12:53:38 by htopa            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
DEPS = libft.h
MY_SOURCES = ft_isalpha.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_strlen.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memset.c \
			ft_bzero.c \
			main.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CCFLAGS)

$(NAME): $(MY_OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(MY_OBJECTS)

all: $(NAME)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

display_end_message:
	echo "Functions compiled and program $(NAME) created."

.PHONY: all clean fclean re
