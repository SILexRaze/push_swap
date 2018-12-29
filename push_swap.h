/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:23 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/29 20:05:44 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct		s_stack
{
	int				n;
	int				v;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_data
{
	t_list	*list;
	t_stack	*a;
	t_stack	*b;
	char	**base;
	int		n_inst;
	int		*inst;
}					t_data;
/*
**	PARSER
*/
char				**ft_init_inst_db(void);
int					ft_check_double(t_stack *a, int n);
void				ft_read_stdin(t_data *data);
void				ft_parse_inst(t_data *data);
void				ft_read_arg(t_data *data, int ac, char **av);
void				ft_error(void);
/*
**	LIST STACK
*/
t_stack				*ft_stack_create_elem(int data);
void				ft_stack_pushback(t_stack **begin_list, int data);
void				ft_stack_pushfront(t_stack **begin_list, int data);
void				ft_stack_clear(t_stack **begin_list);
void				ft_print_stack(t_stack **begin_list);
void				ft_check_ifsort(t_data *data);
int					ft_stack_size(t_stack **begin_list);
/*
**	VERBOSE TEST
*/
void				ft_stack_sort(t_data *data, t_stack **begon_list,
						int (*cmp)());
int					ft_int_cmp(int a, int b);
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
**	VERBOSE
*/
void				ft_verb_stack(t_data *data);
void				ft_exec(t_data *data);
int					ft_min_elem(t_stack **begin_list);
#endif
