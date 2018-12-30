/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 01:02:31 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/30 02:36:58 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_quick_sort(t_data *data, int size)
{
	int	pivot;
	int	i;

	i = 0;
	if (size < 2 || ft_check_ifnsort(data, size))
		return ;
	if (size == 2)
	{
		ft_sa(data);
		return ;
	}
	pivot = ft_median(&data->a, size);
	pivot = ft_partition(data, size, pivot);
	while (i < pivot)
	{
		ft_rra(data);
		i++;
	}
	ft_quick_sort(data, pivot);
	i = size - pivot;
	while (i > 0)
	{
		ft_pa(data);
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
		ft_print_stack(data);
		if (data->a->n >= pivot)
		{
			ft_ra(data);
			j++;
		}
		else
			ft_pb(data);
		size--;
	}
	return (j);
}
