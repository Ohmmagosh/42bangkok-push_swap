/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/10 15:09:20 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	sort_ten(p);
	// int nmin;

	// sort_ten(p);
	// sort_ten(p);
	// if (lenlst(p->stack_a) == 2)
	// 	swap(p, 0);
	// else if (lenlst(p->stack_a) == 3)
		// sort_three(p);
	// else if (lenlst(p->stack_a) == 5)
	// 	sort_five(p);
	// else if (lenlst(p->stack_a) == 10)
	// sort_ten(p);
	// else if (lenlst(p->stack_a) == 100)
	// sort_hundred(p);
	// push(p, 1);
	// push(p, 1);
	// // rotate(p, 3);
	// print_stack(p->stack_a, p->stack_b);
	// sort_five(p);
	
	
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
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_a) != 5)
	{
		if (p->v.flag != 2)
			sort_five_utils(p);
		else if (chk_sorted( p->stack_a, 1) == 0 && p->v.flag == 2)
			push(p, 0);
		else
		 	sort_three(p);
	}
}

