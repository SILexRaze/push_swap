# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vifonne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 19:05:19 by vifonne           #+#    #+#              #
#    Updated: 2018/12/30 13:00:40 by rvalenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		ft_read.c			\
					ft_init.c			\
					ft_stack.c			\
					ft_error.c			\
					ft_verbose.c		\
					ft_sort_list.c		\
					ft_op.c				\
					ft_rotate_op.c		\
					ft_rev_rot_op.c		\
					ft_stack_clear.c	\
					ft_check.c			\
					ft_exec.c			\
					ft_checker.c
LIBFT		=		../libft/
OBJ			=		$(SRCS:.c=.o)
CC			=		gcc -Wall -Wextra -Werror -g -fsanitize=address
NAME		=		checker
.PHONY		=		all $(NAME) $(OBJ) clean fclean re

all:	$(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	$(CC) $(OBJ) -o $(NAME) -I $(LIBFT) -I includes/ -L $(LIBFT) -lft
%.o: %.c
	$(CC) -I $(LIBFT) -I . -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@make clean -C $(LIBFT)

fclean:	clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re:	fclean all
