/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 02:17:15 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/30 02:26:02 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_data *data)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (data->a)
	{
		tmp = data->a;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		ft_stack_pushfront(&data->a ,tmp2->n);
		free(tmp2);
		tmp->next = NULL;
	}
}

void	ft_rrb(t_data *data)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (data->b)
	{
		tmp = data->b;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		ft_stack_pushfront(&data->b ,tmp2->n);
		free(tmp2);
		tmp->next = NULL;
	}
}


void	ft_rrr(t_data *data)
{
	ft_rra(data);
	ft_rrb(data);
}
