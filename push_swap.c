/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:34:43 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/28 04:04:52 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	p;

	if (ac > 1)
	{
		if (ac == 2)
			return (0);
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
