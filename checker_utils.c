/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 02:26:31 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/27 04:09:14 by psuanpro         ###   ########.fr       */
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
		// printf("ptr->data -> %d data ->%d len -> %d\n", ptr->data, data, len);
		// if (len != 1)
		// 	return (0);
	}
	return (1);
}

int	error_re(int mode)
{
	if (mode == 1)
		ft_putstr_fd("wrong argument!!!", 2);
	exit (0);
}