# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/30 00:46:54 by vifonne           #+#    #+#              #
#    Updated: 2018/12/30 14:14:08 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ps

all:	$(NAME)

$(NAME):
	make -C libft/
	make -C push_swap_dir/
	make -C checker_dir/
	cp push_swap_dir/push_swap .
	cp checker_dir/checker .

clean:
	make clean -C push_swap_dir/
	make clean -C checker_dir/

fclean: clean
	make fclean -C push_swap_dir/
	make fclean -C checker_dir/
	rm -f push_swap
	rm -f checker

re: fclean all
