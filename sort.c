/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/05 05:36:26 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	sort_three(p);
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
	(void)p;
}

