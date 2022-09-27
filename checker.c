/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:22:13 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/28 04:04:06 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int		chk_argv_sp(char **av)
{
	int	i;

	i = -1;
	while (av[++i])
	{
		if (av[i][0] == '\0')
			return (0);
	}
	return (1);
}

int	chk_argv(char ***av)
{
	int	i;
	int	j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (!chk_digit(av[i][j]))
				return (error_re(1));
		}
	}
	return (1);
}

int	chk_double(t_lst *p)
{
	t_lst	*ptr;

	ptr = p;

	while (ptr)
	{
		if (!chk_double_utils(p, ptr->data))
			return (error_re(0));
		ptr = ptr->link;
	}
	return (1);
}

int	chk_digit(char *num)
{
	int	i;

	i = -1;
	if (num[0] == '+' || (num[0] == '-' && !ft_isdigit(num[0 + 1])))
		return (0);
	if (num[0] == '-')
		i = 0;
	while (num[++i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
	}
	return (1);
}

int	checker(t_var *p)
{
	chk_double(p->stack_a);
	chk_sorted(p->stack_a);

	return (1);
}