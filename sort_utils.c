/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:59:36 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/08 22:49:01 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setintdex(t_var *p, int mode)
{
	if (mode == 0)
	{
		p->first = find_pos(p->stack_a, 0);
		p->secound = find_pos(p->stack_a, 1);
		p->last = find_pos(p->stack_a, 2);
	}
	else if (mode == 1)
	{
		p->first = find_pos(p->stack_b, 0);
		p->secound = find_pos(p->stack_b, 1);
		p->last = find_pos(p->stack_b,2);
	}
}

int	lenlst(t_lst *p)
{
	int	i;

	i = 0;
	while (p)
	{
		i++;
		p = p->link;
	}
	return (i);
}

int	find_pos(t_lst *p, int mode)
{
	while (p)
	{
		if (mode == 0)
			return (p->data);
		else if(mode == 1)
		{
			p = p->link;
			return (p->data);
		}
		else if(mode == 2)
		{
			if (p->link == NULL)
				return (p->data);
		}
		p = p->link;
	}
	return (0);
}

void	find_value(t_var *p)
{
	p->v.min = find_minmax(p->stack_a, 0);
	p->v.max = find_minmax(p->stack_a, 1);
	p->v.pmin = findpos_minmax(p->stack_a, p->v.min);
	p->v.pmax = findpos_minmax(p->stack_a, p->v.max);
	p->v.nmin = find_nextmin(p->stack_a, p->v.min);
}

int	find_minmax(t_lst *p, int mode)
{
	int	tmp;
	
	tmp = p->data;
	while (p)
	{
		if (tmp > p->data && mode == 0)
			tmp = p->data;
		else if (tmp < p->data && mode == 1)
			tmp = p->data;
		p = p->link;
	}
	return (tmp);
}
