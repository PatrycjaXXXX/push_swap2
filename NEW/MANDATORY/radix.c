// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   radix.c                                            :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/09/05 07:11:06 by psmolich          #+#    #+#             */
// /*   Updated: 2025/09/06 09:51:39 by psmolich         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"
// #define TRUE 1
// #define FALSE 0

// static t_list	*ft_0after1(t_list *stack, int bit_parser)
// {
// 	int	already_seen_one;

// 	already_seen_one = FALSE;
// 	while (stack)
// 	{
// 		if ((stack->content >> bit_parser) & 1)
// 			already_seen_one = TRUE;
// 		else if (already_seen_one == TRUE)
// 			return (stack);
// 		stack = stack->next;
// 	}
// 	return (NULL);
// }

// void	ft_radixsort(t_list **a, t_list **b, int size_a)
// {
// 	int		max_bit;
// 	int		bit_parser;
// 	t_list	*wrong;

// 	max_bit = ft_bitcount(size_a - 1);
// 	bit_parser = 0;
// 	while (bit_parser < max_bit)
// 	{
// 		while (1)
// 		{
// 			wrong = ft_0after1(*a, bit_parser);
// 			ft_movetop(a, b, wrong, NULL);
// 			if (ft_0after1(*a, bit_parser) == NULL)
// 				break ;
// 			ft_move("pb\n", a, b);
// 		}
// 		while (*b)
// 			ft_move("pa\n", a, b);
// 		bit_parser++;
// 	}
// }


void	ft_radixsort(t_list **a, t_list **b, int size_a)
{
	int		max_bits;
	int		i;
	int		j;

	max_bits = ft_bitcount(size_a - 1);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size_a)
		{
			if (((*a)->content >> i) & 1)
				ft_move("ra\n", a, b);
			else
				ft_move("pb\n", a, b);
			j++;
		}
		while (*b)
			ft_move("pa\n", a, b);
		i++;
	}
}
