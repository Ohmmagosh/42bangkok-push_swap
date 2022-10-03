/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 04:39:38 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/03 09:44:08 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_var *p, int mode)
{
	if (mode == 0)
		rotate_a(p);
	else if (mode == 1)
		rotate_b(p);
}

t_lst	*lstlast(t_lst *p)
{
	t_lst	*tmp;

	while(p->link)
	{
		p = p->link;
	}
	tmp = p;
	return (tmp);
}

void	rotate_a(t_var *p)
{
	t_lst	*tmpl;
	t_lst	*tmp;

	tmpl = lstlast(p->stack_a);
	tmp = p->stack_a;
	p->stack_a = p->stack_a->link;
	tmpl->link = tmp;
	tmpl->link->link = NULL;
	ft_printf("ra\n");
}

void	rotate_b(t_var *p)
{
	t_lst	*tmpl;
	t_lst	*tmp;

	tmpl = lstlast(p->stack_b);
	tmp = p->stack_b;
	p->stack_b = p->stack_b->link;
	tmpl->link = tmp;
	tmpl->link->link = NULL;
	ft_printf("rb\n");
}