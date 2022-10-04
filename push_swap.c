/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:34:43 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/05 04:27:01 by psuanpro         ###   ########.fr       */
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
			return (0);
		create_lst(&p);
		checker(&p);
		sort(&p);
	}
	else
		printf("argument error\n");
	return (0);
}
