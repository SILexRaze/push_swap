/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 15:07:38 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/23 15:14:09 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_ifsort(t_stack	**begin_list)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *begin_list;
	tmp2 = NULL;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp2 = tmp->next;
			if (tmp->n > tmp2->n)
			{
				ft_putstr("KO\n");
				exit(0);
			}
			tmp = tmp->next;
		}
		ft_putstr("OK\n");
	}
}
