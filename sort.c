/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/07 20:14:57 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "push_swap.h"

void	sort(t_var *p)
{
	sort_five(p);
	// push(p, 1);
	// push(p, 1);
	// // rotate(p, 3);
	// print_stack(p->stack_a, p->stack_b);
	// sort_five(p);
	
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
		{
			find_value(p);
			setintdex(p, 0);
			if (p->first != p->v.min)
			{
				printf("p->pmin  %d p->pmax %d\n", p->v.pmin, p->v.pmax);
				if (p->v.pmin < lenlst(p->stack_a) / 2)
					rotate(p, 0);
				else if (p->v.pmin > lenlst(p->stack_a) / 2 && p->v.pmin == lenlst(p->stack_a))
					rotate(p, 3);
			}
			else
			{
			 	push(p, 1);
				p->v.flag++;
			}
		}
		else if (chk_sorted( p->stack_a, 1) == 0 && p->v.flag == 2)
			push(p, 0);
		else
		 	sort_three(p);
		print_stack(p->stack_a, p->stack_b);
		sleep(3);
	}
}

