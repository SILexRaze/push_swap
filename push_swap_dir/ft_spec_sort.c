/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 21:40:12 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/31 22:29:52 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_spec_sort(t_data *data)
{
	if (ft_ifasb(data) && !ft_ifbsc(data) && !ft_ifasc(data))
	{
		ft_sa(data);
		ft_stack_pushback(&data->inst, 0);
	}
	else if (ft_ifasb(data) && !ft_ifbsc(data) && ft_ifasc(data))
	{
		ft_ra(data);
		ft_stack_pushback(&data->inst, 5);
	}
	else if (!ft_ifasb(data) && ft_ifbsc(data) && !ft_ifasc(data))
	{
		ft_rra(data);
		ft_stack_pushback(&data->inst, 8);
		ft_sa(data);
		ft_stack_pushback(&data->inst, 0);
	}
	else if (!ft_ifasb(data) && ft_ifbsc(data) && ft_ifasc(data))
	{
		ft_rra(data);
		ft_stack_pushback(&data->inst, 8);
	}
	else
	{
		ft_ra(data);
		ft_stack_pushback(&data->inst, 5);
		ft_sa(data);
		ft_stack_pushback(&data->inst, 0);
	}
}

void	ft_spec_tsort(t_data *data)
{
	if (data->a->n > data->a->next->n)
	{
		ft_sa(data);
		ft_stack_pushback(&data->inst, 0);
	}
}

int		ft_ifasb(t_data *data)
{
	if (data->a->n > data->a->next->n)
		return (1);
	return (0);
}

int		ft_ifbsc(t_data *data)
{
	if (data->a->next->n > data->a->next->next->n)
		return (1);
	return (0);
}

int		ft_ifasc(t_data *data)
{
	if (data->a->n > data->a->next->next->n)
		return (1);
	return (0);
}
