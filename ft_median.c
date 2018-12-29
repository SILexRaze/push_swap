/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 23:34:09 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/30 00:18:52 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*ft_list_to_tab(t_stack **begin_list, size_t n)
{
	size_t	i;
	t_stack	*tmp;
	int		*tab;

	i = 0;
	tmp = *begin_list;
	tab = NULL;
	if (n > 0)
	{
		if (!(tab = (int *)ft_memalloc(sizeof(int) * n)))
			return (NULL);
		while (i < n && tmp)
		{
			tab[i] = tmp->n;
			tmp = tmp->next;
			i++;
		}
	}
	return (tab);
}

void	ft_sort_tab(int	*tab,  size_t size)
{
	size_t	i;
	int		tmp;
	int		sort;

	sort = 0;
	tmp = 0;
	while (!sort)
	{
		sort = 1;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				sort = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

int		ft_median(int *tab, size_t size)
{
	return (tab[size / 2]);
}
