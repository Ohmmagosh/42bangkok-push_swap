/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/28 04:33:32 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	
	swap_a(p);
	swap_a(p);
	while (p->stack_a)
	{
		printf("p->stack_a->data --> %d\n", p->stack_a->data);
		p->stack_a = p->stack_a->link;
	}
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