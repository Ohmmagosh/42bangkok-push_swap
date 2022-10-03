/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/03 09:42:52 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	push(p, 0);
	push(p, 0);
	push(p, 0);
	push(p, 0);
	push(p, 0);
	push(p, 0);
	push(p, 0);
	push(p, 0);
	push(p, 0);
	push(p, 1);
	push(p, 1);
	push(p, 1);
	push(p, 1);
	// rotate_a(p);
	// rotate_a(p);
	// rotate_a(p);
	// rotate_a(p);
	rotate(p, 1);
	rotate(p, 0);


	// push_a(p);
	printf("stack_A\n");
	while (p->stack_a)
	{
		printf("p->stack_a %d\n", p->stack_a->data);
		p->stack_a = p->stack_a->link;
	}
	printf("stack_B\n");
	while (p->stack_b)
	{
		printf("p->stack_b %d\n", p->stack_b->data);
		p->stack_b = p->stack_b->link;
	}
	// swap(p, 0);
	// while (p->stack_a)
	// {
	// 	printf("p->stack_a->data --> %d\n", p->stack_a->data);
	// 	p->stack_a = p->stack_a->link;
	// }
}

