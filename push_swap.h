/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:23 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/22 13:46:24 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# define SCREENW 100
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
void				ft_print_stack(t_stack **begin_list);
int					ft_stack_size(t_stack **begin_list);
/*
**	LIST SORT
*/
void				ft_stack_sort(t_data *data, t_stack **begon_list, int (*cmp)());
int					ft_int_cmp(int a, int b);
/*
**	VERBOSE
*/
void				ft_verb_stack(t_data *data);
int					ft_min_elem(t_stack **begin_list);
#endif
