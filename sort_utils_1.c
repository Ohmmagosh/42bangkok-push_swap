/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:35:40 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/06 18:28:53 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

 int	findpos_minmax(t_lst *p, int data)
 {
	int	len;
	len = 0;
	while (p)
	{
		if (p->data == data)
			break;
		p = p->link;
		len++;
	}
	return (len);
 }