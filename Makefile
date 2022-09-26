# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 00:28:30 by psuanpro          #+#    #+#              #
#    Updated: 2022/09/27 02:48:22 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c \
	  get_argv.c \
	  checker.c \
	  checker_utils.c \
	
LIBDIR = ./libft

INCLUDE = -Llibft -lft
OBJS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
$(NAME): $(OBJ)
	make -C $(LIBDIR)
	$(CC) $(CFLAGS) $(SRC) $(OBJ) -o $(NAME) $(INCLUDE)

all: $(NAME)

clean:
	rm -rf $(OBJS)
	make -C $(LIBDIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBDIR) fclean

re: fclean all

.PHONY: all clean fclean re 