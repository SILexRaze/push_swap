/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verbose.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 01:51:43 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/22 02:11:34 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_verb_stack(t_data *data)
{
	t_stack	*tmp;
	int		len;
	int		max;
	int		j;

	len = ft_stack_size(&tmp);
	max = ft_max_elem(&data->a);
	tmp = data->a;
	write(1, "\e[1;1H\e[2J", 12);
	while (tmp)
	{
		j = 0;
		ft_putchar('[');
		if (tmp->n > 0)
		{
			while (j < ((tmp->n * SCREENW) / max))
			{
				ft_putchar('#');
				j++;
			}
		}
		else
			ft_putchar('#');
		ft_putchar(']');
		tmp = tmp->next;
		ft_putchar('\n');
	}
}

int		ft_max_elem(t_stack	**begin_list)
{
	t_stack	*tmp;
	int		t;

	t = 0;
	tmp = *begin_list;
	while (tmp)
	{
		if (tmp->n > t)
			t = tmp->n;
		tmp = tmp->next;
	}
	return (t);
}
