/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 02:26:31 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 00:05:29 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chk_double_utils(t_lst *p, int data)
{
	t_lst	*ptr;
	int	len;

	len = 0;
	ptr = p;
	while (ptr)
	{
		if (ptr->data == data)
			len++;
		ptr = ptr->link;
	}
	if (len != 1)
		return (0);
	return (1);
}

int	error_re(int mode, t_var *p)
{
	if (mode == 0)
	{
		free_three_di_utils(p);
		free_lst(p);
	}
	else if (mode == 1)
		ft_putstr_fd("Error\n", 2);
	else if (mode == 2)
		ft_putstr_fd("Error\n", 2);
	else if (mode == 3)
	{
		free_three_di_utils(p);
		free_lst(p);
		ft_putstr_fd("Error1\n", 2);
	}
	exit (0);
}

int	chk_sorted(t_lst *p, int mode)
{
	t_lst *ptr;

	ptr = p;
	ptr = ptr->link;
	while (p)
	{
		if (p->data < ptr->data)
		{
			ptr = ptr->link;
			p = p->link;
			if (ptr == NULL && mode == 0)
				return(0);
			else if (ptr == NULL && mode == 1)
				return (0);
		}
		else
			break;
	}
	return (1);
}

int	ft_atoi_ps(const char *str, t_var *p)
{
	int					opt;
	long	number;

	number = 0;
	opt = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			opt *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if ((number * opt) > 2147483647 || (number * opt) < -2147483648)
		return (error_re(3, p));
	return (opt * number);
}

void	chk_onearg(t_var *p)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = -1;
	while (p->av[++i])
	{
		j = -1;
		while (p->av[i][++j])
			len++;
	}
	if (len == 2 || len == 1)
		error_re(0, p);
}