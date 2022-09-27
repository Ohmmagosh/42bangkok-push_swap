/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 02:26:31 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/28 03:18:49 by psuanpro         ###   ########.fr       */
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

int	error_re(int mode)
{
	if (mode == 0)
		ft_putstr_fd("Double argument!!!", 2);
	else if (mode == 1)
		ft_putstr_fd("wrong argument!!!", 2);
	else if (mode == 2)
		ft_putstr_fd("argument is sorted!!!", 2);
	else if (mode == 3)
		ft_putstr_fd("argument is more than Maxint or less then Minint!!!", 2);
	exit (0);
}

int	chk_sorted(t_lst *p)
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
			if (ptr == NULL)
				return(error_re(8));
		}
		else 
		{
			break;
		}
	}
	return (1);
}
