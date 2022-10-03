/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:49:23 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/03 08:16:26 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_var *p, int mode)
{
	if (mode == 0)
		push_a(p);
	else if (mode == 1)
		push_b(p);
}

void	no_stack(t_var *p)
{
	p->stack_b = p->stack_a;
	p->stack_a = p->stack_a->link;
	p->stack_b->link = NULL;
}

void	got_stack(t_var *p, int mode)
{
	t_lst	*tmp;
	t_lst	*tmp1;

	if (mode == 0)
	{
		tmp = p->stack_a;
		tmp1 = p->stack_b;
		p->stack_a = p->stack_a->link;
		tmp->link = tmp1;
		p->stack_b = tmp;
	}
	else if (mode == 1)
	{
		tmp = p->stack_b;
		tmp1 = p->stack_a;
		p->stack_b = p->stack_b->link;
		tmp->link = tmp1;
		p->stack_a = tmp;
	}
}

void	push_a(t_var *p)
{
	if (!p->stack_b)
		no_stack(p);
	else
		got_stack(p, 0);
	ft_printf("pa\n");
}

void	push_b(t_var *p)
{
	got_stack(p,1);
	ft_printf("pa\n");
}
