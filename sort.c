/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 01:05:04 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	if (lenlst(p->stack_a) == 2)
		swap(p, 0);
	else if (lenlst(p->stack_a) == 3)
		sort_three(p);
	else if (lenlst(p->stack_a) == 5)
		sort_five(p);
	else if (lenlst(p->stack_a) == 100)
		sort_hundred(p);
	else if (lenlst(p->stack_a) == 500)
		sort_5hundred(p);
	else
		sort_universe(p, lenlst(p->stack_a));
}

void	sort_three(t_var *p)
{
	while (chk_sorted(p->stack_a, 1) == 1)
	{
		setintdex(p, 0);
		if (p->first > p->secound && p->first > p->last)
			rotate(p, 0);
		else if (p->secound > p->first && p->secound > p->last)
			swap(p, 0);
		else if (p->last > p->first && p->last > p->secound)
			swap(p, 0);
	}
}

void	print_stack(t_lst *p, t_lst *b)
{
	ft_printf("stack_A\n");
	while (p)
	{
		ft_printf("p->data %d\n", p->data);
		p = p->link;
	}
	ft_printf("-----------------------------\n");
	ft_printf("stack_B\n");
	while (b)
	{
		ft_printf("p->data %d\n", b->data);
		b = b->link;
	}
	ft_printf("-----------------------------\n");
}

void	sort_five(t_var *p)
{
	p->v.flag = 0;
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_a) != 5)
	{
		if (p->v.flag != 2)
			sort_five_utils(p);
		else if (chk_sorted(p->stack_a, 1) == 0 && p->v.flag == 2)
			push(p, 0);
		else
			sort_three(p);
	}
}

void	sort_universe(t_var *p, int len)
{
	p->v.flaguni = 0;
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_a) != len)
	{
		if (p->v.flaguni != len - 3)
			sort_universe_utils(p);
		else if (chk_sorted(p->stack_a, 1) == 0 && p->v.flaguni == len - 3)
			push(p, 0);
		else
			sort_three(p);
	}
}
