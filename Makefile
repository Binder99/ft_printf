# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbinder <tbinder@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 10:33:45 by tbinder           #+#    #+#              #
#    Updated: 2023/10/06 10:30:40 by tbinder          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_hexa.c \
		ft_unsigned_int.c ft_checkformat.c
		
OBJS 	= 	$(SRCS:.c=.o)

CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f

all	:	$(NAME)

$(NAME)	: 	$(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o	:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
