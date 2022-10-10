/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:35:40 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/10 14:11:41 by psuanpro         ###   ########.fr       */
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
	long	nmin;

	nmin = 2147483648;
	while (p)
	{
		if (p->data < nmin && p->data > min)
			nmin = p->data;
		p = p->link;
	}
	return ((int)nmin);
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
int	find_pos_utils(t_lst *p, int mode)
{
	while (p)
	{
		if (mode == 0)
			return (p->pos);
		else if(mode == 1)
		{
			p = p->link;
			return (p->pos);
		}
		else if(mode == 2)
		{
			if (p->link == NULL)
				return (p->pos);
		}
		p = p->link;
	}
	return (0);
}