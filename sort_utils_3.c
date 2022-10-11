/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:21:11 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/12 01:55:20 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5hundred(t_var *p)
{
	p->v.flag500 = 0;
	set_static(p);
	while (chk_sorted(p->stack_a, 1) == 1 || lenlst(p->stack_a) != 500)
	{
		if (p->v.flag500 != 495)
			sort_5hundred_utils(p);
		else if (chk_sorted(p->stack_a, 1) == 0 && p->v.flag500 == 495)
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

void	sort_5hundred_utils(t_var *p)
{
	setintdex(p, 2);
	if (p->first <= 50 && p->v.flag500 < 51)
		mani_stackb_500(p, 27);
	else if (p->first < 100 && p->v.flag500 >= 50 && p->v.flag500 < 100)
		mani_stackb_500(p, 76);
	else if (p->first < 150 && p->v.flag500 >= 99 && p->v.flag500 < 150)
		mani_stackb_500(p, 126);
	else if (p->first < 200 && p->v.flag500 >= 149 && p->v.flag500 < 200)
		mani_stackb_500(p, 176);
	else if (p->first < 250 && p->v.flag500 >= 199 && p->v.flag500 < 250)
		mani_stackb_500(p, 226);
	else if (p->first < 300 && p->v.flag500 >= 249 && p->v.flag500 < 300)
		mani_stackb_500(p, 276);
	else if (p->first < 350 && p->v.flag500 >= 299 && p->v.flag500 < 350)
		mani_stackb_500(p, 326);
	else if (p->first < 400 && p->v.flag500 >= 349 && p->v.flag500 < 400)
		mani_stackb_500(p, 376);
	else if (p->first < 450 && p->v.flag500 >= 399 && p->v.flag500 < 450)
		mani_stackb_500(p, 426);
	else if (p->first < 496 && p->v.flag500 >= 449 && p->v.flag500 < 496)
		mani_stackb_500(p, 473);
	else
	 	rotate(p, 0);
}

void	mani_stackb_500(t_var *p, int mid)
{
	push(p, 1);
	p->v.flag500++;
	if (p->v.flag500 > 1)
	{
		setintdex(p, 3);
		if (p->first < mid)
			rotate(p, 1);
	}
}