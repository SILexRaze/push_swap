/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_inst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 14:20:23 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/31 12:26:51 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_optimize_ninst(t_data *data)
{
	int		i;
	int		trig;
	t_stack	*tmp;

	i = 0;
	trig = 0;
	data->opti = 0;
	tmp = data->inst;
	while (tmp)
	{
		if (tmp->next && ((tmp->n == 5 && tmp->next->n == 8)
					|| (tmp->n == 8 && tmp->next->n == 5)))
			trig = 1;
		else if (tmp->next && ((tmp->n == 0 && tmp->next->n == 1)
					|| (tmp->n == 1 && tmp->next->n == 0)) && (trig = 1))
			ft_stack_pushback(&data->opti, 2);
		else if (tmp->next && ((tmp->n == 5 && tmp->next->n == 6)
					|| (tmp->n == 6 && tmp->next->n == 5)) && (trig = 1))
			ft_stack_pushback(&data->opti, 7);
		else if ((trig = 2))
			ft_stack_pushback(&data->opti, tmp->n);
		if (trig == 1)
			tmp = tmp->next->next;
		else if (trig == 2)
			tmp = tmp->next;
	}
}

void	ft_print_inst(t_data *data)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	data->base = ft_init_inst_db();
	while (i < 5)
	{
		ft_optimize_ninst(data);
		ft_stack_clear(&data->inst);
		data->inst = data->opti;
		i++;
	}
	tmp = data->inst;
	while (tmp)
	{
		ft_putendl(data->base[tmp->n]);
		tmp = tmp->next;
	}
}
