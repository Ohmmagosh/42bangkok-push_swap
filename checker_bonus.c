/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:30:34 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 21:05:47 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	prnstack(t_lst *a, t_lst *b)
// {
// 	printf("stack A\n");
// 	while (a)
// 	{
// 		printf("data a -> %d\n", a->data);
// 		a = a->link;
// 	}
// 	printf("stack B\n");
// 	while (b)
// 	{
// 		printf("data b -> %d\n", b->data);
// 		b = b->link;
// 	}
// }

int	checker_bonus(t_var *p)
{
	if (!chk_double(p->stack_a))
	{
		free_lst(p);
		exit(0);
	}
	return (1);
}

static void	init_bonus(t_var *p)
{
	p->b.a = lenlst(p->stack_a);
	p->b.b = lenlst(p->stack_b);
	p->b.str = get_next_line(0);
}

void	read_input(t_var *p)
{
	p->b.tmp = lenlst(p->stack_a);
	while (1)
	{
		init_bonus(p);
		if (p->b.str == NULL)
		{
			if (chk_sorted(p->stack_a, 1) != 1 && p->b.a == p->b.tmp)
				ft_printf("OK\n");
			else
			 	ft_printf("KO\n");
			break ;
		}
		else if (ft_strncmp(p->b.str, "sa\n", 3) == 0 && p->b.a >= 2)
			swap_a(p, 0);
		else if (ft_strncmp(p->b.str, "sb\n", 3) == 0 && p->b.b >= 2)
			swap_b(p, 0);
		else if (ft_strncmp(p->b.str, "pa\n", 3) == 0 && p->b.b != 0)
			push_a(p, 0);
		else if (ft_strncmp(p->b.str, "pb\n", 3) == 0 && p->b.a != 0)
			push_b(p, 0);
		else if (ft_strncmp(p->b.str, "ss\n", 3) == 0 && p->b.a >= 2 && p->b.b >= 2)
			swap_ab(p, 0);
		else if (ft_strncmp(p->b.str, "ra\n", 3) == 0 && p->b.a >= 2)
			rotate_a(p, 0);
		else if (ft_strncmp(p->b.str, "rb\n", 3) == 0 && p->b.a >= 2)
			rotate_b(p, 0);
		else if (ft_strncmp(p->b.str, "rr\n", 3) == 0 && p->b.a >= 2 && p->b.b >= 2)
			rotate_ab(p, 0);
		else if (ft_strncmp(p->b.str, "rra\n", 4) == 0 && p->b.a >= 2 && p->b.b >= 2)
			reverse_rotate_a(p, 0);
		else if (ft_strncmp(p->b.str, "rrb\n", 4) == 0 && p->b.a >= 2 && p->b.b >= 2)
			reverse_rotate_b(p, 0);
		else if (ft_strncmp(p->b.str, "rrr\n", 4) == 0 && p->b.a >= 2 && p->b.b >= 2)
			reverse_rotate_ab(p, 0);
		else 
		{
			ft_putstr_fd("Error\n", 2);
			break ;
		}
		free(p->b.str);
	}
}

int	main(int ac, char **av)
{
	t_var	p;
	
	if (ac > 1)
	{
		init_push_swap(&p);
		get_argv(&p, av, ac);
		if (!chk_argv(p.av + 1) || !chk_argv_sp(av + 1, 1))
		{
			free_three_di(&p);
			return (0);
		}
		create_lst(&p);
		chk_onearg(&p);
		free_three_di_utils(&p);
		checker_bonus(&p);
		read_input(&p);
	}
	else 
	{
		return (0);
	}
}

