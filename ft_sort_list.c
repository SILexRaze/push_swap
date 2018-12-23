/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 12:52:03 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/23 15:13:53 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdlib.h>
#include    "push_swap.h"

static void    ft_swap_ptr(t_stack **ptr1, t_stack **ptr2)
{
	t_stack  *temp_ptr;

	temp_ptr = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp_ptr;
}

static void    ft_swap_list(t_stack **begin_list,
		t_stack **list1,
		t_stack **list2,
		t_stack *prev_list1,
		t_stack *prev_list2)
{
	t_stack  *temp_next;
	temp_next = (*list2)->next;
	if (prev_list1 != NULL)
		prev_list1->next = (*list2);
	else
		(*begin_list) = (*list2);
	if (prev_list2 != (*list1))
	{   
		(*list2)->next = (*list1)->next;
		prev_list2->next = (*list1);
	}   
	else
		(*list2)->next = (*list1);
	(*list1)->next = temp_next;
	ft_swap_ptr(list1, list2);
}

int		ft_int_cmp(int a, int b)
{
	return (a - b);
}

void    ft_stack_sort(t_data *data, t_stack **begin_list, int (*cmp)())
{
	t_stack  *list1;
	t_stack  *list2;
	t_stack  *prev_list1;
	t_stack  *prev_list2;
	if ((begin_list != NULL) && ((*begin_list)) != NULL
			&& (((*begin_list)->next) != NULL))
	{   
		list1 = (*begin_list);
		prev_list1 = NULL;
		while ((list1->next) != NULL)
		{
			list2 = list1->next;
			prev_list2 = list1;
			while (list2 != NULL)
			{
				if ((*cmp)(list1->n, list2->n) > 0)
					ft_swap_list(begin_list, &list1, &list2, prev_list1, prev_list2);
				prev_list2 = list2;
				list2 = list2->next;
			}
//			ft_verb_stack(data);
			(void)data;
			prev_list1 = list1;
			list1 = list1->next;
		}
	}
}
