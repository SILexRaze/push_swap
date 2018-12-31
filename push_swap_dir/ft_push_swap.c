/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 00:25:13 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/31 13:45:55 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_data	*data;

	if (ac <= 1)
		return (0);
	if (!(data = (t_data *)ft_memalloc(sizeof(t_data))))
		return (0);
	ft_read_arg(data, ac, av);
	ft_quick_sort(data, ac - 1);
	ft_print_inst(data);
	return (0);
}
