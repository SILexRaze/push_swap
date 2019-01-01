/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verbose.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 01:51:43 by vifonne           #+#    #+#             */
/*   Updated: 2019/01/01 16:12:14 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <unistd.h>

int			ft_min_elem(t_stack **begin_list)
{
	t_stack	*tmp;
	int		t;

	t = 2147483647;
	tmp = *begin_list;
	while (tmp)
	{
		if (tmp->n < t)
			t = tmp->n;
		tmp = tmp->next;
	}
	if (t == 0)
		return (1);
	return (t);
}

void		ft_print_stack(t_data *data)
{
	t_stack	*tmpa;
	t_stack	*tmpb;

	tmpa = data->a;
	tmpb = data->b;
	system("clear");
	ft_putstr("\na\t|\tb\n-\t|\t-\n");
	while (tmpa || tmpb)
	{
		if (tmpa)
		{
			ft_putnbr(tmpa->n);
			tmpa = tmpa->next;
		}
		ft_putstr("\t|\t");
		if (tmpb)
		{
			ft_putnbr(tmpb->n);
			tmpb = tmpb->next;
		}
		ft_putchar('\n');
	}
	usleep(WAIT);
	ft_putchar('\n');
}
