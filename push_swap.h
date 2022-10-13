/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:33:17 by psuanpro          #+#    #+#             */
/*   Updated: 2022/10/14 01:12:35 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_val
{
	int		min;
	int		max;
	int		pmin;
	int		pmax;
	int		lminmax;
	int		nmin;
	int		flag;
	int		flag100;
	int		flag500;
	int		flaguni;
}				t_val;

typedef struct s_lst
{
	int				pos;
	int				data;
	struct s_lst	*link;
}				t_lst;

typedef struct s_var
{
	char	***av;
	t_lst	*lst;
	t_lst	*stack_a;
	t_lst	*stack_b;
	t_val	v;
	int		len;
	int		first;
	int		secound;
	int		last;
}				t_var;

t_lst	*first_lst(t_var *p, int data);
t_lst	*lstlast(t_lst *p, int mode);
t_lst	*find_lst(t_lst *p, int data);
int		chk_argv(char ***av);
int		checker(t_var *p);
int		chk_digit(char *num);
int		chk_argv_sp(char **av);
int		chk_double(t_lst *p);
int		chk_double_utils(t_lst *p, int data);
int		chk_sorted(t_lst *p, int mode);
int		error_re(int mode, t_var *p);
void	init_push_swap(t_var *p);
void	get_argv(t_var *p, char **av, int ac);
void	create_lst(t_var *p);
void	next_lst(t_var *p, int data);
void	sort(t_var *p);
void	swap(t_var *p, int mode);
void	swap_a(t_var *p, int mode);
void	swap_b(t_var *p, int mode);
void	swap_ab(t_var *p, int mode);
void	push(t_var *p, int mode);
void	push_a(t_var *p, int mode);
void	push_b(t_var *p, int mode);
void	no_stack(t_var *p);
void	got_stack(t_var *p, int mode);
void	rotate(t_var *p, int mode);
void	rotate_a(t_var *p, int mode);
void	rotate_b(t_var *p, int mode);
void	rotate_ab(t_var *p, int mode);
void	reverse_rotate_a(t_var *p, int mode);
void	reverse_rotate_b(t_var *p, int mode);
void	reverse_rotate_ab(t_var *p, int mode);
void	sort_three(t_var *p);
void	sort_five(t_var *p);
void	setintdex(t_var *p, int mode);
int		firstindex(t_lst *p);
void	print_stack(t_lst *p, t_lst *b);
int		lenlst(t_lst *p);
int		find_pos(t_lst *p, int mode);
void	find_value(t_var *p, int mode);
int		find_minmax(t_lst *p, int mode);
int		findpos_minmax(t_lst *p, int data);
int		find_nextmin(t_lst *p, int min);
void	sort_five_utils(t_var *p);
void	sort_five_utils_1(t_var *p);
void	sort_hundred(t_var *p);
void	sort_hundred_utils(t_var *p);
void	sort_hundred_utils_1(t_var *p);
void	set_static(t_var *p);
int		find_pos_utils(t_lst *p, int mode);
void	mani_stackb(t_var *p, int mid);
void	sort_5hundred(t_var *p);
void	sort_5hundred_utils(t_var *p);
void	mani_stackb_500(t_var *p, int mid);
void	sort_universe(t_var *p, int len);
void	sort_universe_utils(t_var *p);
void	sort_universe_utils_1(t_var *p);
void	free_three_di(t_var *p);
void	free_three_di_utils(t_var *p);
void	free_lst(t_var *p);
void	free_success(t_var *p);
int		ft_atoi_ps(const char *str, t_var *p);
void	chk_onearg(t_var *p);

#endif
