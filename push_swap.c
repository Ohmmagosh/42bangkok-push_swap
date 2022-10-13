/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:34:43 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/13 23:34:08 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	p;

	if (ac > 1)
	{
		init_push_swap(&p);
		get_argv(&p, av, ac);
		if (!chk_argv(p.av + 1) || !chk_argv_sp(av + 1))
		{
			free_three_di(&p);
			return (0);
		}
		create_lst(&p);
		chk_onearg(&p);
		free_three_di_utils(&p);
		checker(&p);
		sort(&p);
		free_lst(&p);
	}
	else
		ft_putstr_fd("Error\n", 2);
	return (0);
}
