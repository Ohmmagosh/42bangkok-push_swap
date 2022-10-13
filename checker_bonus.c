/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:30:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 02:00:03 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	p;
	
	if (ac == 1)
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
		while (1)
		{
			get_next_line(0);
		}
	}
}