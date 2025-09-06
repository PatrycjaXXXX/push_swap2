/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:21:51 by psmolich          #+#    #+#             */
/*   Updated: 2025/09/06 10:26:59 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

int	ft_move(char *move, t_list **a, t_list **b)
{
	ft_printf("%s", move);
	return (apply_instr(move, a, b));
}

static void	ft_sort3(t_list **a, t_list **b)
{
	while (1)
	{
		if ((*a)->content > (*a)->next->content)
			ft_move("sa\n", a, b);
		if (ft_lstissorted_as(*a) == SUCCESS)
			break ;
		ft_move("rra\n", a, b);
	}
}

void	ft_selectionsort(t_list **a, t_list **b, int size_a)
{
	int		moves;
	t_list	*min;

	moves = size_a - 3;
	while (moves--)
	{
		min = ft_lstsmallest(*a);
		ft_movetop(a, b, min, NULL);
		if (ft_lstissorted_as(*a) == FAIL)
			ft_move("pb\n", a, b);
	}
	ft_sort3(a, b);
	while (*b)
		ft_move("pa\n", a, b);
}
