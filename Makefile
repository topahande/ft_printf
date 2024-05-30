#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 12:53:31 by htopa             #+#    #+#              #
#    Updated: 2024/05/24 16:14:34 by htopa            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = ft_printf.c \
	ft_putchar.c \
	ft_puthexadecimal.c \
	ft_putnbr_base.c \
	ft_putnbr_positive.c \
	ft_putnbr.c \
	ft_putpercent.c \
	ft_putpointer.c \
	ft_putstr.c \
	ft_putunsignednbr_fd.c \
	ft_putunsignednbr.c \

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	echo "ft_printf Done !"

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
