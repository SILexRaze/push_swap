/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 15:36:49 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/31 16:08:31 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insert_sort(t_data *data, int size)
{
	int	j;
	int	i;

	i = 2;
	while (i < size)
	{
		ft_pb(data);
		ft_stack_pushback(&data->inst, 4);
		i++;
	}
	if (!ft_check_ifnsort(data, 2))
	{
		ft_sa(data);
		ft_stack_pushback(&data->inst, 0);
	}
	i = 2;
	while (i < size)
	{
		j = 0;
		if (data->a)
		{
			while (data->a->n < data->b->n && j < i)
			{
				ft_ra(data);
				ft_stack_pushback(&data->inst, 5);
				j++;
			}
		}
		ft_pa(data);
		ft_stack_pushback(&data->inst, 3);
		while (j)
		{
			ft_rra(data);
			ft_stack_pushback(&data->inst, 8);
			j--;
		}
		i++;
	}
}
