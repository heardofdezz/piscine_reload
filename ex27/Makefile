# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/11 16:44:51 by maloua-h          #+#    #+#              #
#    Updated: 2018/12/12 17:56:53 by maloua-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/ft_display_file.c

OBJ = ft_display_file.o

INC = includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	 gcc $(FLAGS) -c $(SRCS) 
	 gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)
