/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movetop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:54:24 by psmolich          #+#    #+#             */
/*   Updated: 2025/09/06 08:17:16 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

static int	ft_steps(int index, int size)
{
	if (index < size / 2)
		return (index);
	return (index - size);
}

static void	ft_adjuststeps(int *a_steps, int *b_steps, int size_a, int size_b)
{
	unsigned int	best;

	best = ft_absint(*a_steps) + ft_absint(*b_steps);
	if (size_a < size_b)
	{
		if (*a_steps > 0)
			size_a = -size_a;
		if (best > ft_absint(*a_steps + size_a) + ft_absint(*b_steps))
			(*a_steps) += size_a;
	}
	else
	{
		if (*b_steps > 0)
			size_b = -size_b;
		if (best > ft_absint(*a_steps) + ft_absint(*b_steps + size_b))
			(*b_steps) += size_b;
	}
}

static void	ft_dodoublerot(t_list **a, t_list **b, int *a_steps, int *b_steps)
{
	while (*a_steps > 0 && *b_steps > 0)
	{
		ft_move("rr\n", a, b);
		(*a_steps)--;
		(*b_steps)--;
	}
	while (*a_steps < 0 && *b_steps < 0)
	{
		ft_move("rrr\n", a, b);
		(*a_steps)++;
		(*b_steps)++;
	}
}

static void	ft_dosinglerot(t_list **a, t_list **b, int *a_steps, int *b_steps)
{
	while (*a_steps > 0)
	{
		ft_move("ra\n", a, b);
		(*a_steps)--;
	}
	while (*a_steps < 0)
	{
		ft_move("rra\n", a, b);
		(*a_steps)++;
	}
	while (*b_steps > 0)
	{
		ft_move("rb\n", a, b);
		(*b_steps)--;
	}
	while (*b_steps < 0)
	{
		ft_move("rrb\n", a, b);
		(*b_steps)++;
	}
}

void	ft_movetop(t_list **a, t_list **b, t_list *node_a, t_list *node_b)
{
	int	a_steps;
	int	b_steps;
	int	size_a;
	int	size_b;

	a_steps = 0;
	b_steps = 0;
	size_a = ft_lstsize(*a);
	size_b = ft_lstsize(*b);
	if (node_a)
		a_steps = ft_steps(ft_lstindex(*a, node_a), size_a);
	if (node_b)
		b_steps = ft_steps(ft_lstindex(*b, node_b), size_b);
	if (a_steps * b_steps < 0)
		ft_adjuststeps(&a_steps, &b_steps, size_a, size_b);
	ft_dodoublerot(a, b, &a_steps, &b_steps);
	ft_dosinglerot(a, b, &a_steps, &b_steps);
}
