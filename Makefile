# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 00:28:30 by psuanpro          #+#    #+#              #
#    Updated: 2022/09/28 03:44:56 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c \
	  get_argv.c \
	  checker.c \
	  checker_utils.c \
	  sort.c
	
LIBDIR = ./libft

INCLUDE = -Llibft -lft
OBJS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
COMPILE = echo "Push_swap Compiled..."
$(NAME): $(OBJ)
	@make -C $(LIBDIR)
	@$(CC) $(CFLAGS) $(SRC) $(OBJ) -o $(NAME) $(INCLUDE)
	@$(COMPILE)

all: $(NAME)

clean:
	@rm -rf $(OBJS)
	@make -C $(LIBDIR) clean

fclean: clean
	@rm -rf $(NAME)
	@make -C $(LIBDIR) fclean

re: fclean all

t1:
	./push_swap "12 234 456 24 -1" -23 78 69 80
.PHONY: all clean fclean re 