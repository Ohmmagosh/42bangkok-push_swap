/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:35:40 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/07 19:57:00 by psuanpro         ###   ########.fr       */
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

 int	find_nextmin(t_lst *p, int min)
 {
	int	nmin;

	nmin = p->data;
	while (p)
	{
		if (nmin < p->data && nmin != min)
			nmin = p->data;
		p = p->link;
	}
	return (nmin);
 }