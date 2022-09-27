/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:33:17 by psuanpro          #+#    #+#             */
/*   Updated: 2022/09/28 04:33:09 by psuanpro         ###   ########.fr       */
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
	t_lst	*stack_a;
	t_lst	*stack_b;
}				t_var;

t_lst	*first_lst(t_var *p, int data);
void	get_argv(t_var *p,char **av, int ac);
void	create_lst(t_var *p);
void	next_lst(t_var *p, int data);
int		chk_argv(char ***av);
int		checker(t_var *p);
int		chk_digit(char *num);
int		chk_argv_sp(char **av);
int		chk_double(t_lst *p);
int		chk_double_utils(t_lst *p, int data);
int		chk_sorted(t_lst *p);
int		error_re(int mode);
void	sort(t_var *p);
void	swap_a(t_var *p);
void	swap_b(t_var *p);

#endif