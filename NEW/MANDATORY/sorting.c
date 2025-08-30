/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:59:47 by psmolich          #+#    #+#             */
/*   Updated: 2025/08/30 16:50:57 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

static int	ft_move(char *move, t_list **a, t_list **b)
{
	ft_printf("%s", move);
	return (apply_instr(move, a, b));
}

int	des_to_as(t_list **a, t_list **b, int size_a)
{
	int	moves;

	if (size_a == 2)
		return (ft_move("sa\n", a, b));
	moves = size_a - 3;
	while (moves--)
	{
		ft_move("rra\n", a, b);
		ft_move("pb\n", a, b);
	}
	ft_move("ra\n", a, b);
	ft_move("sa\n", a, b);
	while (*b)
		ft_move("pa\n", a, b);
	return (ft_lstissorted_as(*a));
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

int	ft_selectionsort(t_list **a, t_list **b, int size_a)
{
	int	moves;
	int	min;

	moves = size_a - 3;
	while (moves--)
	{
		min = ft_lstsmallest(*a)->content;
		while ((*a)->content != min)
			ft_move("ra\n", a, b);
		ft_move("pb\n", a, b);
	}
	ft_sort3(a, b);
	while (*b)
		ft_move("pa\n", a, b);
	return (SUCCESS);
}
