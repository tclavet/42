# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tclavet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/14 15:16:23 by tclavet           #+#    #+#              #
#    Updated: 2018/04/14 15:20:16 by tclavet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -c -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = ft_display_file.o
HDR = -I lib.h

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
