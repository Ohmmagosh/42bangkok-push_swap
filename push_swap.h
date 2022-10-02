/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:33:17 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/03 04:43:29 by psuanpro         ###   ########.fr       */
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
void	swap(t_var *p, int mode);
void	swap_a(t_var *p);
void	swap_b(t_var *p);
void	push(t_var *p, int mode);
void	push_a(t_var *p);
void	push_b(t_var *p);
void	no_stack(t_var *p);
void	got_stack(t_var *p, int mode);
void	init_push_swap(t_var *p);
void	rotate(t_var *p, int mode);
void	rotate_a(t_var *p);
void	rotate_b(t_var *p);

#endif
