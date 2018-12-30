/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_inst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 14:20:23 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/30 14:40:54 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_inst(t_data *data)
{
	t_stack	*tmp;

	data->base = ft_init_inst_db();

	tmp = data->inst;
	while (tmp)
	{
		if (tmp->next && tmp->n == 5 && tmp->next->n == 8)
			tmp = tmp->next->next;
		else if (tmp->next && tmp->n == 0 && tmp->next->n == 1)
		{
			ft_putendl(data->base[2]);
			tmp = tmp->next->next;
		}
		else if (tmp->next && tmp->n == 5 && tmp->next->n == 6)
		{
			ft_putendl(data->base[7]);
			tmp = tmp->next->next;
		}
		else if (tmp->next && tmp->n == 8 && tmp->next->n == 9)
		{
			ft_putendl(data->base[10]);
			tmp = tmp->next->next;
		}
		else
		{
			ft_putendl(data->base[tmp->n]);
			tmp = tmp->next;
		}
	}
}
