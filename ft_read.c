/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:05 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/19 19:09:30 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_read_stdin(t_data *stack)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) > 0)
	{
		ft_list_pushback(&stack->list, ft_strdup(line), ft_strlen(line));
		ft_strdel(&line);
		stack->n_inst++;
	}
}

int		main(void)
{
	t_data	*stack;

	if (!(stack = (t_data*)ft_memalloc(sizeof(t_data))))
		return (0);
	ft_read_stdin(stack);
	ft_print_list(&stack->list);
	return (0);
}
