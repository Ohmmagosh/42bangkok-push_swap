/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 04:39:38 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/17 18:48:49 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_var *p, int mode)
{
	if (mode == 0)
		rotate_a(p, 1);
	else if (mode == 1)
		rotate_b(p, 1);
	else if (mode == 2)
		rotate_ab(p, 2);
	else if (mode == 3)
		reverse_rotate_a(p, 1);
	else if (mode == 4)
		reverse_rotate_b(p, 1);
	else if (mode == 5)
		reverse_rotate_ab(p, 1);
}

t_lst	*lstlast(t_lst *p, int mode)
{
	t_lst	*tmp;

	tmp = NULL;
	if (!p)
		return (NULL);
	if (mode == 0)
	{
		while (p->link)
			p = p->link;
		tmp = p;
	}
	else if (mode == 1)
	{
		while (p->link->link)
			p = p->link;
		tmp = p;
	}
	return (tmp);
}

void	rotate_a(t_var *p, int mode)
{
	t_lst	*tmpl;
	t_lst	*tmp;

	if (lenlst(p->stack_a) < 2)
		return ;
	tmpl = lstlast(p->stack_a, 0);
	tmp = p->stack_a;
	p->stack_a = p->stack_a->link;
	tmpl->link = tmp;
	tmpl->link->link = NULL;
	if (mode == 1)
		ft_printf("ra\n");
}

void	rotate_b(t_var *p, int mode)
{
	t_lst	*tmpl;
	t_lst	*tmp;

	if (lenlst(p->stack_b) < 2)
		return ;
	tmpl = lstlast(p->stack_b, 0);
	tmp = p->stack_b;
	p->stack_b = p->stack_b->link;
	tmpl->link = tmp;
	tmpl->link->link = NULL;
	if (mode == 1)
		ft_printf("rb\n");
}

void	rotate_ab(t_var *p, int mode)
{	
	rotate_a(p, 0);
	rotate_b(p, 0);
	if (mode == 1)
		ft_printf("rra\n");
}
