/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 01:02:31 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/31 15:36:43 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_quick_sort(t_data *data, int size)
{
	int	pivot;
	int	i;

	i = 0;
	if (size < 2 || ft_check_ifnsort(data, size))
		return ;
	pivot = ft_median(&data->a, size);
	pivot = ft_partition(data, size, pivot);
	while (i < pivot && data->a != NULL)
	{
		ft_rra(data);
		ft_stack_pushback(&data->inst, 8);
		i++;
	}
	ft_quick_sort(data, pivot);
	i = size - pivot;
	while (i > 0)
	{
		ft_pa(data);
		ft_stack_pushback(&data->inst, 3);
		i--;
	}
	ft_quick_sort(data, size - pivot);
}

int		ft_partition(t_data *data, int size, int pivot)
{
	int j;

	j = 0;
	while (size > 0)
	{
		if (data->a->n >= pivot)
		{
			ft_ra(data);
			ft_stack_pushback(&data->inst, 5);
			j++;
		}
		else
		{
			ft_pb(data);
			ft_stack_pushback(&data->inst, 4);
		}
		size--;
	}
	return (j);
}
