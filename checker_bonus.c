/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:30:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/17 18:43:10 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_input_utils(t_var *p)
{
	if (chk_sorted(p->stack_a, 1) != 1 && p->b.a == p->b.tmp)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	checker_bonus(t_var *p)
{
	if (!chk_double(p->stack_a))
	{
		free_lst(p);
		exit(0);
	}
	return (1);
}

static void	init_bonus(t_var *p)
{
	p->b.a = lenlst(p->stack_a);
	p->b.b = lenlst(p->stack_b);
	p->b.str = get_next_line(0);
}

void	read_input(t_var *p)
{
	p->b.tmp = lenlst(p->stack_a);
	while (1)
	{
		init_bonus(p);
		if (p->b.str == NULL)
		{
			read_input_utils(p);
			break ;
		}
		if (read_input_utils_1(p, 0) == 1)
		{
			ft_putstr_fd("Error\n", 2);
			break ;
		}
		free(p->b.str);
	}
}

int	main(int ac, char **av)
{
	t_var	p;

	if (ac > 1)
	{
		init_push_swap(&p);
		get_argv(&p, av, ac);
		if (!chk_argv(p.av + 1) || !chk_argv_sp(av + 1, 1))
		{
			free_three_di(&p);
			return (0);
		}
		create_lst(&p);
		chk_onearg(&p);
		free_three_di_utils(&p);
		checker_bonus(&p);
		read_input(&p);
		free_lst(&p);
	}
	else
		return (0);
}
