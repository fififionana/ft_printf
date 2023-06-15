# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frushiti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 15:38:58 by frushiti          #+#    #+#              #
#    Updated: 2023/04/04 15:39:44 by frushiti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c ft_puthex.c ft_putunsigned.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

RM = rm -f

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) 
	$(AR) $(NAME) $(OBJ)
	

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

