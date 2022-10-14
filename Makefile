# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 00:28:30 by psuanpro          #+#    #+#              #
#    Updated: 2022/10/14 17:16:40 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

SRC = push_swap.c \
	  get_argv.c \
	  chk.c \
	  checker_utils.c \
	  sort.c \
	  sort_utils.c \
	  sort_utils_1.c \
	  sort_utils_2.c \
	  sort_utils_3.c \
	  swap.c \
	  push.c \
	  rotate.c \
	  reverse_rotate.c \
	  free.c

SRC_BONUS = checker_bonus.c \
			get_argv.c \
			chk.c \
			checker_utils.c \
			sort.c \
			sort_utils.c \
			sort_utils_1.c \
			sort_utils_2.c \
			sort_utils_3.c \
			swap.c \
			push.c \
			rotate.c \
			reverse_rotate.c \
			free.c


LIBDIR = ./libft

INCLUDE = -Llibft -lft
OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
COMPILE = echo "Push_swap Compiled..."
COMPILE_BONUS = echo "Push_swap bonus Compiled..."

$(NAME):
	@make -C $(LIBDIR)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME) $(INCLUDE) -g
	@$(COMPILE)

all: $(NAME)

bonus:
	@$(CC) $(CFLAGS) $(SRC_BONUS) -o $(NAME_BONUS) $(INCLUDE)

clean:
	@rm -rf $(OBJS)
	@make -C $(LIBDIR) clean

fclean: clean
	@rm -rf $(NAME) $(NAME_BONUS)
	@make -C $(LIBDIR) fclean
	@rm -rf push_swap.dYSM

re: fclean all


.PHONY: all clean fclean re
