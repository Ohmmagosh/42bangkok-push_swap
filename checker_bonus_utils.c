/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:21:50 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/17 18:54:51 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	read_input_utils_1(t_var *p, int num)
{
	if (ft_strncmp(p->b.str, "sa\n", 3) == 0)
		swap_a(p, 0);
	else if (ft_strncmp(p->b.str, "sb\n", 3) == 0)
		swap_b(p, 0);
	else if (ft_strncmp(p->b.str, "pa\n", 3) == 0)
		push_a(p, 0);
	else if (ft_strncmp(p->b.str, "pb\n", 3) == 0)
		push_b(p, 0);
	else if (ft_strncmp(p->b.str, "ss\n", 3) == 0)
		swap_ab(p, 0);
	else if (ft_strncmp(p->b.str, "ra\n", 3) == 0)
		rotate_a(p, 0);
	else if (ft_strncmp(p->b.str, "rb\n", 3) == 0)
		rotate_b(p, 0);
	else if (ft_strncmp(p->b.str, "rr\n", 3) == 0)
		rotate_ab(p, 0);
	else if (ft_strncmp(p->b.str, "rra\n", 4) == 0)
		reverse_rotate_a(p, 0);
	else if (ft_strncmp(p->b.str, "rrb\n", 4) == 0)
		reverse_rotate_b(p, 0);
	else if (ft_strncmp(p->b.str, "rrr\n", 4) == 0)
		reverse_rotate_ab(p, 0);
	else
		num = 1;
	return (num);
}
