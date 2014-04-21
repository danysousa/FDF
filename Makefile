# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/13 14:40:06 by dsousa            #+#    #+#              #
#    Updated: 2013/12/18 14:15:26 by dsousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
FLAGS = -Wall -Werror -Wextra
SRC = main.c reader.c ligne.c tools.c ./libft/libft.a

all: $(NAME)

$(NAME): lib
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -L\
	/usr/X11/lib -I /usr/X11/include/ -lmlx -lXext -lX11

lib:
	@make -C libft

cleanlib:
	@make clean -C libft

fcleanlib:
	@make fclean -C libft

clean:
	@/bin/rm -f $(NAME)
	@make clean -C libft

fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft

re: fclean all
