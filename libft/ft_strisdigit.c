/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:02:42 by vifonne           #+#    #+#             */
/*   Updated: 2018/12/20 15:21:13 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisdigit(char *str)
{
	size_t	i;
	int		trig;

	i = 0;
	trig = 0;
	if (str[i] == '+' || str[i] == '-')
		trig = 1;
	while (str[i])
	{
		if (!ft_isdigit((int)str[i]) && trig == 0)
			return (0);
		i++;
	}
	return (1);
}
