/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 02:36:09 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 23:55:23 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_var *p, int mode)
{
	t_lst	*tmp;
	t_lst	*tmpl;

	if (lenlst(p->stack_a) < 2)
		return ;
	tmpl = lstlast(p->stack_a, 0);
	tmp = lstlast(p->stack_a, 1);
	tmp->link = NULL;
	tmpl->link = p->stack_a;
	p->stack_a = tmpl;
	if (mode == 1)
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_var *p, int mode)
{
	t_lst	*tmp;
	t_lst	*tmpl;

	if (lenlst(p->stack_b) < 2)
		return ;
	tmpl = lstlast(p->stack_b, 0);
	tmp = lstlast(p->stack_b, 1);
	tmp->link = NULL;
	tmpl->link = p->stack_b;
	p->stack_b = tmpl;
	if (mode == 1)
		ft_printf("rrb\n");
}

void	reverse_rotate_ab(t_var *p, int mode)
{
	if (lenlst(p->stack_a) < 2 || lenlst(p->stack_b) < 2)
		return ;
	reverse_rotate_a(p, 0);
	reverse_rotate_b(p, 0);
	if (mode == 1)
		ft_printf("rrr\n");
}
