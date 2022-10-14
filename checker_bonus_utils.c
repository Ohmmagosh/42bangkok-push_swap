/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:21:50 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 22:43:12 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	read_cond(t_var *p)
{
	if (p->b.a >= 2 && p->b.b >= 2)
		return (1);
	return (0);
}

int	read_input_utils_1(t_var *p, int num)
{
	if (ft_strncmp(p->b.str, "sa\n", 3) == 0 && p->b.a >= 2)
		swap_a(p, 0);
	else if (ft_strncmp(p->b.str, "sb\n", 3) == 0 && p->b.b >= 2)
		swap_b(p, 0);
	else if (ft_strncmp(p->b.str, "pa\n", 3) == 0 && p->b.b != 0)
		push_a(p, 0);
	else if (ft_strncmp(p->b.str, "pb\n", 3) == 0 && p->b.a != 0)
		push_b(p, 0);
	else if (ft_strncmp(p->b.str, "ss\n", 3) == 0 && read_cond(p))
		swap_ab(p, 0);
	else if (ft_strncmp(p->b.str, "ra\n", 3) == 0 && p->b.a >= 2)
		rotate_a(p, 0);
	else if (ft_strncmp(p->b.str, "rb\n", 3) == 0 && p->b.b >= 2)
		rotate_b(p, 0);
	else if (ft_strncmp(p->b.str, "rr\n", 3) == 0 && read_cond(p))
		rotate_ab(p, 0);
	else if (ft_strncmp(p->b.str, "rra\n", 4) == 0 && read_cond(p))
		reverse_rotate_a(p, 0);
	else if (ft_strncmp(p->b.str, "rrb\n", 4) == 0 && read_cond(p))
		reverse_rotate_b(p, 0);
	else if (ft_strncmp(p->b.str, "rrr\n", 4) == 0 && read_cond(p))
		reverse_rotate_ab(p, 0);
	else
		num = 1;
	return (num);
}
