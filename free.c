/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:03:39 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/13 21:43:25 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_three_di(t_var *p)
{
	int	i;
	int	j;

	i = -1;
	while (p->av[++i])
	{
		j = -1;
		while (p->av[i][++j])
			free(p->av[i][j]);
		free(p->av[i]);
	}
	if (p->av)
		free(p->av);
}

void	free_lst(t_var *p)
{
	t_lst *tmp;

	while (p->stack_a)
	{
		tmp = p->stack_a->link;
		free(p->stack_a);
		p->stack_a = tmp;
	}
}

void	free_three_di_utils(t_var *p)
{
	int	i;
	int	j;

	p->av = p->av - 1;
	i = -1;
	while (p->av[++i])
	{
		j = -1;
		while (p->av[i][++j])
			free(p->av[i][j]);
		free(p->av[i]);
	}
	free(p->av);
}
