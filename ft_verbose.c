/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verbose.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 01:51:43 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/29 19:52:31 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <unistd.h>

void	ft_verb_stack(t_data *data)
{
	t_stack	*tmp;
	int		max;
	int		j;

	max = ft_min_elem(&data->a);
	tmp = data->a;
	write(1, "\e[1;1H\e[2J", 12);
	while (tmp)
	{
		j = 0;
		if (tmp->n > 0)
		{
			while (j < (tmp->n / max))
			{
				ft_putchar('#');
				j++;
			}
		}
		else
			ft_putchar('#');
		tmp = tmp->next;
		ft_putchar('\n');
	}
	usleep(100000);
}

/*static void	ft_print_sharp(int n)
  {
  int	i;

  i = -1;
  while (++i < n)
  ft_putchar('#');
  ft_putchar('\n');
  usleep(10000);
  }*/

/*void	ft_verb_stack(t_data *data)
  {
  t_stack	*tmp;
  int		t;
  int		j;
  int		len;

  j = 1;
  len = ft_stack_size(&data->a);
  while (j < len)
  {
  tmp = data->a;
  t = tmp->n;
  while (tmp)
  {
  if (tmp->n < t && tmp->v == 0)
  t = tmp->n;
  tmp = tmp->next;
  }
  tmp = data->a;
  while (tmp)
  {
  if (tmp->n == t)
  {
  printf("ok%d\n", tmp->v);
  tmp->v = j;
  }
  tmp = tmp->next;
  }
  j++;
  }
  tmp = data->a;
  while (tmp)
  {
  t = tmp->v;
  printf("/%d/\n", tmp->v);
  while (t > 0)
  {
  ft_putchar('#');
  t--;
  }
  ft_putchar('\n');
  tmp = tmp->next;
  }
  usleep(10000);
  }*/

int		ft_min_elem(t_stack	**begin_list)
{
	t_stack	*tmp;
	int		t;

	t = 0;
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
