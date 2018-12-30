/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 15:07:38 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/30 15:37:49 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_ifsort(t_data *data)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (data->b)
	{
		ft_putstr("KO\n");
		return ;
	}
	tmp = data->a;
	tmp2 = NULL;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp2 = tmp->next;
			if (tmp->n > tmp2->n)
			{
				ft_putstr("KO\n");
				return ;
			}
			tmp = tmp->next;
		}
		ft_putstr("OK\n");
	}
}
