/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:53:53 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/20 15:16:12 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_data	*data;

	if (!(data = (t_data*)ft_memalloc(sizeof(t_data))))
		return (0);
	ft_read_stdin(data);
	ft_print_list(&data->list);
	ft_parse_inst(data);
	ft_read_arg(data, ac, av);
	ft_print_stack(&data->a);
	(void)ac;
	(void)av;
	return (0);
}
