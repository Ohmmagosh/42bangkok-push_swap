/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:35:40 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/08 23:44:02 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

 int	findpos_minmax(t_lst *p, int data)
 {
	int	len;
	
	len = 0;
	while (p)
	{
		if (p->data == data)
			break;
		p = p->link;
		len++;
	}
	return (len);
 }

 int	find_nextmin(t_lst *p, int min)
 {
	int	nmin;

	nmin = p->data;
	while (p)
	{
		if (nmin > p->data && p->data > min)
			nmin = p->data;
		p = p->link;
	}
	return (nmin);
 }

void	sort_five_utils(t_var *p)
{
	find_value(p);
	setintdex(p, 0);
	if (p->first != p->v.min)
		sort_five_utils_1(p);
	else
	{
		push(p, 1);
		p->v.flag++;
	}
}

void	sort_five_utils_1(t_var *p)
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