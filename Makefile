# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 00:28:30 by psuanpro          #+#    #+#              #
#    Updated: 2022/10/11 22:06:49 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

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
	  reverse_rotate.c

LIBDIR = ./libft

INCLUDE = -Llibft -lft
OBJS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
COMPILE = echo "Push_swap Compiled..."
$(NAME): $(OBJ)
	@make -C $(LIBDIR)
	@$(CC) $(CFLAGS) $(SRC) $(OBJ) -o $(NAME) $(INCLUDE) -g
	@$(COMPILE)

all: $(NAME)

clean:
	@rm -rf $(OBJS)
	@make -C $(LIBDIR) clean

fclean: clean
	@rm -rf $(NAME)
	@make -C $(LIBDIR) fclean

re: fclean all

t:
	./push_swap "12 234 456 24 -1" -23 78 69 80
t1:
	./push_swap "12" -23 78
.PHONY: all clean fclean re
