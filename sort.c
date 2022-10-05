/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/05 11:37:37 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	if (p->len == 3)
		sort_three(p);
	else if (p->len == 5)
		sort_five(p);
	// reverse_rotate_a(p, 1);
	// print_stack(p->stack_a, p->stack_b);
}

void	sort_three(t_var *p)
{
	while (chk_sorted(p->stack_a, 1) == 1)
	{
		setintdex(p);
		if (p->first > p->secound && p->first > p->last)
			rotate_a(p, 1);
		else if (p->secound > p->first && p->secound > p->last)
			swap_a(p, 1);
		else if (p->last > p->first && p->last > p->secound)
			swap_a(p, 1);
	}
	// ft_printf("hellllol\n");
}

void	print_stack(t_lst *p, t_lst *b)
{
	ft_printf("stack_A\n");
	while (p)
	{
		ft_printf("p->data %d\n", p->data);
		p = p->link;
	}
	ft_printf("stack_B\n");
	while (b)
	{
		ft_printf("p->stack_b %d\n", b->data);
		b = b->link;
	}
}

void	sort_five(t_var *p)
{
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_b) != 0)
	{
		setintdex(p);
		if (p->first < p->secound && p->first < p->last)
			push_b(p, 1);
		else if (p->secound < p->first && p->secound < p->last)
			swap_a(p, 1);
		else if (p->last < p->first && p->last < p->secound)
			reverse_rotate_a(p, 1);
	}
}

