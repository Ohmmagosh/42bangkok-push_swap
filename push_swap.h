/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:33:17 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/27 03:46:37 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct	s_lst
{
	int		data;
	struct s_lst	*link;
}				t_lst;

typedef struct s_var
{
	char	***av;
	t_lst	*lst;
	t_lst	*tlst;
}				t_var;

void	get_argv(t_var *p,char **av, int ac);
int		chk_argv(char ***av);
void	create_lst(t_var *p);
void	next_lst(t_var *p, int data);
t_lst	*first_lst(t_var *p, int data);
int		checker(t_var *p);
int		chk_digit(char *num);
int		chk_argv_sp(char **av);
int		chk_double_utils(t_lst *p, int data);
int		error_re(int mode);

#endif