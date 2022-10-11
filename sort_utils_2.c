/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:02:03 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/11 20:20:33 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_hundred(t_var *p)
{
	p->v.flag10 = 0;
	set_static(p);
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_a) != 100)
	{
		if (p->v.flag10 != 95)
			sort_hundred_utils(p);
		else if (chk_sorted(p->stack_a, 1) == 0 && p->v.flag10 == 95)
		{
			find_value(p, 1);
			if (p->v.pmax == 0)
				push(p, 0);
			else if (p->v.pmax != 0 && p->v.pmax < lenlst(p->stack_b) / 2)
				rotate(p, 1);
			else if (p->v.pmax != 0 && p->v.pmax >= lenlst(p->stack_b) / 2)
				rotate(p, 4);
		}
		else
			sort_five(p);
	}
}

void	sort_hundred_utils(t_var *p)
{
	setintdex(p, 2);
	if (p->first <= 19 && p->v.flag10 < 20)
		mani_stackb(p, 11);
	else if (p->first < 39 && p->v.flag10 >= 19 && p->v.flag10 < 39)
		mani_stackb(p, 31);
	else if (p->first < 58 && p->v.flag10 >= 38 && p->v.flag10 < 58)
		mani_stackb(p, 50);
	else if (p->first < 77 && p->v.flag10 >= 57 && p->v.flag10 < 77)
		mani_stackb(p, 69);
	else if (p->first < 96 && p->v.flag10 >= 76 && p->v.flag10 < 96)
		mani_stackb(p, 68);
	else
	 	rotate(p, 0);
}

void	set_static(t_var *p)
{
	t_lst	*tmp;
	int		counter;

	counter = 0;
	find_value(p, 0);
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