# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 14:44:28 by psmolich          #+#    #+#              #
#    Updated: 2025/08/30 21:12:56 by psmolich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# .SILENT:
.PHONY: all basic bonus clean fclean re
.DEFAULT_GOAL := basic

PUSHSWAP := push_swap
CHECKER := checker

LIB := libft/libft.a

SRCS_PUSHSWAP := MANDATORY/push_swap.c \
					MANDATORY/arguments.c \
					MANDATORY/instructions.c \
					MANDATORY/sorting.c \
					MANDATORY/LIST/ft_lstaddback.c \
					MANDATORY/LIST/ft_lstaddfront.c \
					MANDATORY/LIST/ft_lstfree.c \
					MANDATORY/LIST/ft_lstissorted_as.c \
					MANDATORY/LIST/ft_lstissorted_des.c \
					MANDATORY/LIST/ft_lstlargest.c \
					MANDATORY/LIST/ft_lstlast.c \
					MANDATORY/LIST/ft_lstnew.c \
					MANDATORY/LIST/ft_lstprint.c \
					MANDATORY/LIST/ft_lstsize.c \
					MANDATORY/LIST/ft_lstsmallest.c


SRCS_CHECKER := BONUS/checker.c \
					BONUS/arguments.c \
					BONUS/instructions.c \
					BONUS/t_list.c

CC := cc
CFLAGS := -Wall -Wextra -Werror

all: $(PUSHSWAP) $(CHECKER)

basic: $(PUSHSWAP)

bonus: $(CHECKER)

$(PUSHSWAP): $(LIB)
	$(CC) $(CFLAGS) -o $(PUSHSWAP) $(SRCS_PUSHSWAP) $(LIB)

$(CHECKER): $(LIB)
	$(CC) $(CFLAGS) -o $(CHECKER) $(SRCS_CHECKER) $(LIB)

$(LIB):
	make -C libft/

clean:
	make clean -C libft/

fclean: clean
	rm -f $(PUSHSWAP)
	rm -f $(CHECKER)
	make fclean -C libft/

re: fclean all

rep:
	rm -f push_swap
	make basic