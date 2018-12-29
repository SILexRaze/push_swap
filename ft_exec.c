#include "push_swap.h"

void	(*g_tab[11])(t_data *data) = {ft_sa, ft_sb, ft_ss, ft_pa, ft_pb, ft_ra,
	ft_rb, ft_rr, ft_rra, ft_rrb, ft_rrr};

void	ft_exec(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->n_inst)
	{
		g_tab[data->inst[i]](data);
		ft_putchar('a');
		ft_putchar('\n');
		ft_print_stack(&data->a);
		ft_putchar('\n');
		ft_putchar('b');
		ft_putchar('\n');
		ft_print_stack(&data->b);
		ft_putchar('\n');
		i++;
	}
}
