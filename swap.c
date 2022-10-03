/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:43:26 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/03 10:14:28 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_var *p, int mode)
{
	if (mode == 0)
	{
		swap_a(p);
		ft_printf("sa\n");
	}
	else if (mode == 1)
	{
		swap_b(p);
		ft_printf("sb\n");
	}
	else if (mode == 2)
	{
		swap_ab(p);
		ft_printf("ss\n");
	}

}

void	swap_a(t_var *p)
{
	t_lst	*tmp;

	tmp = p->stack_a->link;
	p->stack_a->link = p->stack_a->link->link;
	tmp->link = p->stack_a;
	p->stack_a = tmp;

}

void	swap_b(t_var *p)
{
	t_lst	*tmp;

	tmp = p->stack_b->link;
	p->stack_b->link = p->stack_b->link->link;
	tmp->link = p->stack_b;
	p->stack_b = tmp;

}

void	swap_ab(t_var *p)
{
	swap_a(p);
	swap_b(p);
}

