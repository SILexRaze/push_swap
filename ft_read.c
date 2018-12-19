/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:05 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/19 21:06:40 by vifonne          ###   ########.fr       */
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

	tmp = data->list;
	while (tmp)
	{
		
	}
}
