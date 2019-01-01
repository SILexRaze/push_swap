/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 15:36:49 by vifonne           #+#    #+#             */
/*   Updated: 2019/01/01 15:15:11 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insert_sort(t_data *data, int size)
{
	int	j;
	int	i;

	i = 1;
	ft_allpb(data, size);
	while (++i < size)
	{
		j = -1;
		if (data->a)
		{
			while (data->a->n < data->b->n && ++j < i)
				ft_pra(data);
		}
		ft_ppa(data);
		while (j)
		{
			ft_prra(data);
			j--;
		}
	}
}

void	ft_allpb(t_data *data, int size)
{
	int	i;

	i = 2;
	while (i < size)
	{
		ft_ppb(data);
		i++;
	}
	if (!ft_check_ifnsort(data, 2))
		ft_psa(data);
}
