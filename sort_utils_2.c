/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:02:03 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/10 23:31:10 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ten(t_var *p)
{
	set_static(p);
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_a) != 100)
	{
		if (p->v.flag10 != 95)
			sort_ten_utils(p);
		// else if (chk_sorted(p->stack_a, 1) == 0 && p->v.flag10 == 95)
		// {
		// 	push(p, 0);
		// }
		// else
		//  	sort_five(p);
	}
}

void	sort_ten_utils(t_var *p)
{
	setintdex(p, 2);
	if (p->first <= 19 && p->v.flag10 < 20)
	{
		// push(p, 1);
		// p->v.flag10++;
		// if (p->v.flag10 > 1)
		mani_stackb(p, 11);
	}
	else if (p->first < 39 && p->v.flag10 >= 19 && p->v.flag10 < 39)
	{
		// push(p, 1);
		// p->v.flag10++;
		// if (p->v.flag10 > 1)
		mani_stackb(p, 31);
	}
	else if (p->first < 58 && p->v.flag10 >= 38 && p->v.flag10 < 58)
	{
		// push(p, 1);
		// p->v.flag10++;
		// if (p->v.flag10 > 1)
		mani_stackb(p, 50);
	}
	else if (p->first < 77 && p->v.flag10 >= 57 && p->v.flag10 < 77)
	{
		// push(p, 1);
		// p->v.flag10++;
		// if (p->v.flag10 > 1)
		mani_stackb(p, 69);
	}
	else if (p->first < 96 && p->v.flag10 >= 76 && p->v.flag10 < 96)
	{
		// push(p, 1);
		// p->v.flag10++;
		// if (p->v.flag10 > 1)
		mani_stackb(p, 68);
	}
	
	else
	 	rotate(p, 0);
	print_stack(p->stack_a, p->stack_b);
	printf("flag %d\n", p->v.flag10);
}

void	set_static(t_var *p)
{
	t_lst	*tmp;
	int		counter;

	counter = 0;
	find_value(p);
	tmp = find_lst(p->stack_a, p->v.min);
	tmp->pos = counter;
	p->v.nmin = p->v.min;
	while (counter < lenlst(p->stack_a))
	{
		counter++;
		tmp = find_lst(p->stack_a, p->v.nmin);
		tmp->pos = counter;
		p->v.nmin = find_nextmin(p->stack_a, p->v.nmin);	
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
	return (p);
}

void	mani_stackb(t_var *p, int mid)
{
	push(p, 1);
	p->v.flag10++;
	if (p->v.flag10 > 1)
	{
		setintdex(p, 3);
		if (p->first < mid)
			rotate(p, 1);
	}
}