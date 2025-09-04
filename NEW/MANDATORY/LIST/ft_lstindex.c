/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 04:57:03 by psmolich          #+#    #+#             */
/*   Updated: 2025/09/04 18:35:13 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstindex(t_list *lst, t_list *node)
{
	int	index;

	index = 0;
	while (lst != node)
	{
		index++;
		lst = lst->next;
	}
	return (index);
}
