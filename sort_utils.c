/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:59:36 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/05 04:49:22 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setintdex(t_var *p)
{
	p->first = firstindex(p->stack_a);
	p->secound = secoundindex(p->stack_a);
	p->last = lastindex(p->stack_a);
}

int	firstindex(t_lst *p)
{
	int	i;

	i = p->data;
	return (i);
}

int	secoundindex(t_lst *p)
{
	int	i;

	p =  p->link;
	i = p->data;
	return (i);
}

int	lastindex(t_lst *p)
{
	int	i;

	while(p->link)
		p = p->link;
	i = p->data;
	return (i);
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

