/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:02:03 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/09 01:14:00 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_hungred(t_var *p)
{
	(void)p;
}

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
	// print_stack(p->stack_a, p->stack_b);
}

void	sort_ten_utils(t_var *p)
{
	find_value(p);
	setintdex(p, 0);
	if(p->first != p->v.min)
		sort_ten_utils_1(p);
	else
	{
		push(p, 1);
		p->v.flag10++;
	}
}

void	sort_ten_utils_1(t_var *p)
{
	if (p->v.pmin <= lenlst(p->stack_a) / 2)
	{
		if (p->first == p->v.nmin)
			swap(p, 0);
		else if (p->first != p->v.min)
			rotate(p, 0);
		else
			rotate(p, 0);
	}
	else 
	{
		if (p->first == p->v.nmin)
			swap(p, 0);
		else
			rotate(p, 3);
	}
}

void	set_static(t_var *p)
{
	int counter;
	t_lst	*tmp;

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
	}
}

t_lst	*find_lst(t_lst *p, int data)
{
	t_lst	*tmp;

	tmp = NULL;
	while (p)
	{
		if (p->data == data)
			tmp = p;
		p = p->link;
	}
	return (tmp);
}