/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_argv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:05:25 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/28 04:04:39 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_argv(t_var *p, char **av, int ac)
{
	int i = -1;

	p->av = (char ***)malloc(sizeof(char **) * ac);
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
}

t_lst	*first_lst(t_var *p, int data)
{
	p->lst = (t_lst *)malloc(sizeof(t_lst));
	p->lst->data = data;
	p->lst->link = NULL;
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
				p->stack_a = first_lst(p, ft_atoi(p->av[i][j]));
			else
			{
				next_lst(p, ft_atoi(p->av[i][j]));
				p->lst = p->lst->link;
			}
		}
	}
}