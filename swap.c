/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:43:26 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/03 01:45:36 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_var *p, int mode)
{
	if (mode == 0)
		swap_a(p);
	else if (mode == 1)
		swap_b(p);
}

void	swap_a(t_var *p)
{
	t_lst	*tmp;

	tmp = p->stack_a->link;
	p->stack_a->link = p->stack_a->link->link;
	tmp->link = p->stack_a;
	p->stack_a = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_var *p)
{
	t_lst	*tmp;

	tmp = p->stack_b->link;
	p->stack_b->link = p->stack_b->link->link;
	tmp->link = p->stack_b;
	p->stack_b = tmp;
	ft_printf("sb\n");
}

