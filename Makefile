# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:54:44 by nfradet           #+#    #+#              #
#    Updated: 2023/10/04 15:07:20 by nfradet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

all: libft.a

libft.a: $(OBJS)
	ar rcs libft.a $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all