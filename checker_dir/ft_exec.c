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
		if (data->verbose == 1)
			ft_print_stack(data);
		i++;
	}
}
