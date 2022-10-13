/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_argv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:05:25 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/13 22:02:12 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_argv(t_var *p, char **av, int ac)
{
	int i = -1;

	p->av = (char ***)malloc(sizeof(char **) * (ac + 1));
	if (!p->av)
		return ;
	while (av[++i])
		p->av[i] = ft_split(av[i], ' ');
	p->av[i] = NULL;
}

void	next_lst(t_var *p, int data)
{
	t_lst *ptr;

	ptr = (t_lst *)malloc(sizeof(t_lst));
	ptr->data = data;
	ptr->link = NULL;
	p->lst->link = ptr;
	p->len++;
}

t_lst	*first_lst(t_var *p, int data)
{
	p->lst = (t_lst *)malloc(sizeof(t_lst));
	p->lst->data = data;
	p->lst->link = NULL;
	p->len++;
	return (p->lst);
}

void	create_lst(t_var *p)
{
	int	i;
	int	j;

	p->lst = NULL;
	i = -1;
	p->av = p->av + 1;
	while (p->av[++i])
	{
		j = -1;
		while (p->av[i][++j])
		{
			if (!p->lst)
				p->stack_a = first_lst(p, ft_atoi_ps(p->av[i][j], p));
			else
			{
				next_lst(p, ft_atoi_ps(p->av[i][j], p));
				p->lst = p->lst->link;
			}
		}
	}
}

void	init_push_swap(t_var *p)
{
	p->stack_a = NULL;
	p->stack_b = NULL;
	p->len = 0;
}
