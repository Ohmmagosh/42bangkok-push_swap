/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:02:03 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/09 16:53:25 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ten(t_var *p)
{
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_a) != 100)
	{
		if (p->v.flag10 != 95)
			sort_ten_utils(p);
		else if (chk_sorted(p->stack_a, 1) == 0 && p->v.flag10 == 95)
		{
			push(p, 0);
		}
		else
		 	sort_five(p);
	}
}

void	sort_ten_utils(t_var *p)
{
	int	counter;

	counter = 1;
	set_static(p);
	while (p->stack_a)
	{
		printf("data %d pos %d\n", p->stack_a->data, p->stack_a->pos);
		p->stack_a = p->stack_a->link;
	}
	// while (counter < 19)
	// {
	// 	setintdex(p, 2);
	// 	printf("p->first %d\n", p->first);
	// 	if (p->first <= 10)
	// 	{
	// 		push(p, 1);
	// 		counter++;
	// 	}
	// 	else if (p->first >= 10 && p->first <= 19)
	// 	{
	// 		push(p, 1);
	// 		counter++;
	// 	}
	// 	else 
	// 		rotate(p, 0);
	// }
	// print_stack(p->stack_a, p->stack_b);
	// exit(0);
	
}

void	set_static(t_var *p)
{
	int counter;
	t_lst	*tmp;

	counter = 0;
	find_value(p);
	tmp = find_lst(p->stack_a, p->v.min);
	tmp->pos = counter;
	printf("tmp ->data %d\n", tmp->data);
	p->v.nmin = p->v.min;
	while (counter < lenlst(p->stack_a))
	{
		printf("nmin %d\n", p->v.nmin);
		counter++;
		tmp = find_lst(p->stack_a, p->v.nmin);
		tmp->pos = counter;
		p->v.nmin = find_nextmin(p->stack_a, p->v.nmin);
		printf("nmin %d\n", p->v.nmin);
		
	}
}

t_lst	*find_lst(t_lst *p, int data)
{
	while (p)
	{
		if (p->data == data)
			break;
		p = p->link;
	}
	printf("p->data return %d data %d\n", p->data, data);
	return (p);
}