# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/09 20:28:47 by maloua-h          #+#    #+#              #
#    Updated: 2018/12/09 21:42:34 by maloua-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INC = includes/

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -c $(SRCS) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean : 
	rm -rf $(OBJ)
 	

fclean : clean
	rm -rf $(NAME)

re : fclean all
