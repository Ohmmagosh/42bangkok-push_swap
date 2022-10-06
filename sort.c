/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/06 21:48:46 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	
	sort_five(p);
	
	// sort_five(p);
	// if (p->len == 3 && p->len < 5)
		// sort_three(p);
	// else if (p->len == 5)
	// print_stack(p->stack_a, p->stack_b);
	// sort_five(p);
	// print_stack(p->stack_a, p->stack_b);

	// reverse_rotate_a(p, 1);
	// print_stack(p->stack_a, p->stack_b);
}

void	sort_three(t_var *p)
{
	while (chk_sorted(p->stack_a, 1) == 1)
	{
		setintdex(p, 0);
		if (p->first > p->secound && p->first > p->last)
			rotate_a(p, 1);
		else if (p->secound > p->first && p->secound > p->last)
			swap_a(p, 1);
		else if (p->last > p->first && p->last > p->secound)
			swap_a(p, 1);
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
	ft_printf("stack_B\n");
	while (b)
	{
		ft_printf("p->stack_b %d\n", b->data);
		b = b->link;
	}
}

void	sort_five(t_var *p)
{
	int	flag;

	flag = 0;
	while(chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_b) != 0)
	{
		find_value(p);
		if (p->first == p->v.min && flag < 2)
		{
			push_b(p, 1);
			find_value(p);
			flag++;
		}
		else if (p->v.pmin < lenlst(p->stack_a) / 2 && p->first != p->v.min)
			rotate_a(p, 1);
		else if (p->v.pmin > lenlst(p->stack_a) / 2 && p->first != p->v.min)
			reverse_rotate_a(p, 1);
		if (flag == 2)
		{
			sort_three(p);
			push_a(p, 1);
			push_a(p, 1);
		}
		print_stack(p->stack_a, p->stack_b);
		sleep(2);
	}
}

