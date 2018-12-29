/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:53:53 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/29 19:02:47 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	t_data	*data;

	if (!(data = (t_data*)ft_memalloc(sizeof(t_data))))
		return (0);
	ft_read_stdin(data);
	ft_parse_inst(data);
	ft_read_arg(data, ac, av);
//	ft_verb_stack(data);
//	ft_stack_sort(data, &data->a, &ft_int_cmp);
	ft_exec(data);
	ft_putchar('\n');
	ft_check_ifsort(&data->a);
	ft_stack_clear(&data->a);
	ft_stack_clear(&data->b);
	ft_list_del(&data->list);
	free(data);
	(void)ac;
	(void)av;
	return (0);
}
