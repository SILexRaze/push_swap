/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:23 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/30 02:07:39 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct		s_stack
{
	int				n;
	int				v;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_data
{
	t_stack	*inst;
	t_stack	*a;
	t_stack	*b;
	char	**base;
}					t_data;
/*
**	PARSER
*/
int					ft_check_double(t_stack *a, int n);
void				ft_read_arg(t_data *data, int ac, char **av);
void				ft_error(void);
char				**ft_init_inst_db(void);
/*
**	LIST STACK
*/
t_stack				*ft_stack_create_elem(int data);
void				ft_stack_pushback(t_stack **begin_list, int data);
void				ft_stack_pushfront(t_stack **begin_list, int data);
void				ft_stack_clear(t_stack **begin_list);
void				ft_print_stack(t_data *data);
int					ft_check_ifnsort(t_data *data, int n);
int					ft_stack_size(t_stack **begin_list);
/*
**	MEDIAN
*/
int					ft_median(t_stack **begin_list, int size);
int					*ft_list_to_tab(t_stack **begin_list, size_t n);
void				ft_sort_tab(int *tab, size_t size);
/*
**	OPERATION Push_swap
*/
void				ft_sa(t_data *data);
void				ft_sb(t_data *data);
void				ft_ss(t_data *data);
void				ft_pa(t_data *data);
void				ft_pb(t_data *data);
void				ft_ra(t_data *data);
void				ft_rb(t_data *data);
void				ft_rr(t_data *data);
void				ft_rra(t_data *data);
void				ft_rrb(t_data *data);
void				ft_rrr(t_data *data);
/*
**	SORT
*/
void				ft_quick_sort(t_data *data, int size);
int					ft_partition(t_data *data, int size, int pivot);
#endif