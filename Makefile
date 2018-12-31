# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/30 00:46:54 by vifonne           #+#    #+#              #
#    Updated: 2018/12/31 11:50:22 by vifonne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD=$'\x1b[1m$'
UNDER=$'\x1b[4m$'
GREY=$'\x1b[30m$'
RED=$'\x1b[31m$'
GREEN=$'\x1b[32m$'
YELLOW=$'\x1b[33m$'
BLUE=$'\x1b[34m$'
PURPLE=$'\x1b[35m$'
CYAN=$'\x1b[36m$'
WHITE=$'\x1b[37m$'
END=$'\x1b[0m$'
REV=$'\x1b[7m$'
NAME = push_swap_proj

all:	$(NAME)

$(NAME):
	@echo "$(UNDER)Compiling libft :$(END)\t\t$(YELLOW)gcc -Wall -Wextra -Werror$(WHITE)\n"
	@/bin/echo -n "["
	@make -C libft/
	@echo "]\n$(GREEN)[OK]$(WHITE)\n"
	@echo "$(UNDER)Compiling push_swap :$(END)\t\t$(YELLOW)gcc -Wall -Wextra -Werror$(WHITE)\n"
	@/bin/echo -n "["
	@make -C push_swap_dir/
	@echo "]\n$(GREEN)[OK]$(WHITE)\n"
	@echo "$(UNDER)Compiling checker :$(END)\t\t$(YELLOW)gcc -Wall -Wextra -Werror$(WHITE)\n"
	@/bin/echo -n "["
	@make -C checker_dir/
	@echo "]\n$(GREEN)[OK]$(WHITE)\n"
	cp push_swap_dir/push_swap .
	cp checker_dir/checker .

clean:
	@echo "$(RED)"
	make clean -C push_swap_dir/
	@echo "$(GREEN)[OK]$(RED)\n"
	make clean -C checker_dir/
	@echo "$(GREEN)[OK]$(RED)\n"

fclean: clean
	@echo "$(RED)"
	make fclean -C push_swap_dir/
	@echo "$(GREEN)[OK]$(RED)\n"
	make fclean -C checker_dir/
	@echo "$(GREEN)[OK]$(RED)\n"
	rm -f push_swap
	rm -f checker
	@echo "$(GREEN)[OK]$(WHITE)\n"

re: fclean all
