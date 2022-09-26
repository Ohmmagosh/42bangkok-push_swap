/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:32:55 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/26 21:37:21 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newl)
{
	t_list	*tmp;

	if (!(*lst))
	{
		(*lst) = newl;
		return ;
	}
	else
	{
		tmp = *lst;
		tmp = ft_lstlast(*lst);
		tmp->next = newl;
	}
}
