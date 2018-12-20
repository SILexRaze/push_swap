/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:05 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/20 15:24:59 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_read_stdin(t_data *data)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) > 0)
	{
		ft_list_pushback(&data->list, ft_strdup(line), ft_strlen(line));
		ft_strdel(&line);
		data->n_inst++;
	}
}

void	ft_parse_inst(t_data *data)
{
	t_list	*tmp;
	size_t	j;

	tmp = data->list;
	data->base = ft_init_inst_db();
	while (tmp)
	{
		j = 0;
		while (data->base[j])
		{
			if (ft_strequ(data->base[j], tmp->data) == 1)
			{
				printf("|%zu|\n", j);
				break ;
			}
			else if (j == 10)
				ft_error();
			j++;
		}
		tmp = tmp->next;
	}
}

void	ft_read_arg(t_data *data, int ac, char **av)
{
	int			i;
	long long	tmp;

	i = 1;
	data->b = NULL;
	while (i < ac)
	{
		if (!ft_strisdigit(av[i]))
			ft_error();
		tmp = (long long)ft_ltoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error();
		if (!(ft_check_double(data->a, tmp)))
			ft_error();
		ft_stack_pushback(&data->a, tmp);
		i++;
	}
}

int		ft_check_double(t_stack *a, int n)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->n == n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
