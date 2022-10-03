/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 03:43:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/04 04:44:55 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_var *p)
{
	push(p, 1);
	push(p, 1);
	push(p, 1);
	push(p, 1);
	push(p, 0);
	push(p, 0);
	push(p, 0);

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
}

void	sort_three(t_var *p)
{

}

void	sort_five(t_var *p)
{

}

