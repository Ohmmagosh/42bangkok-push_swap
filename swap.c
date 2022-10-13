/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:43:26 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 00:56:04 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_var *p, int mode)
{
	if (mode == 0)
		swap_a(p, 1);
	else if (mode == 1)
		swap_b(p, 1);
	else if (mode == 2)
		swap_ab(p, 1);
}

void	swap_a(t_var *p, int mode)
{
	t_lst	*tmp;

	if (!p->stack_a)
	{
		ft_printf("sa\n");
		return ;
	}
	tmp = p->stack_a->link;
	p->stack_a->link = p->stack_a->link->link;
	tmp->link = p->stack_a;
	p->stack_a = tmp;
	if (mode == 1)
		ft_printf("sa\n");
}

void	swap_b(t_var *p, int mode)
{
	t_lst	*tmp;

	if (!p->stack_b)
	{
		ft_printf("sb\n");
		return ;
	}
	tmp = p->stack_b->link;
	p->stack_b->link = p->stack_b->link->link;
	tmp->link = p->stack_b;
	p->stack_b = tmp;
	if (mode == 1)
		ft_printf("sb\n");
}

void	swap_ab(t_var *p, int mode)
{
	swap_a(p, 0);
	swap_b(p, 0);
	if (mode == 1)
		ft_printf("ss\n");
}
