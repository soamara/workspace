# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soamara <soamara@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 10:39:06 by soamara           #+#    #+#              #
#    Updated: 2024/11/12 17:13:51 by soamara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a


SRC = ft_printf.c \
        ft_print_putnbr_p.c \
        ft_putchar.c \
        ft_putnbr_unsigned.c \
        ft_putnbr.c \
        ft_putnbrx.c \
        ft_putnbrxmaj.c \
        ft_putstr.c
        
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

HEADER = ft_printf.h
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re

