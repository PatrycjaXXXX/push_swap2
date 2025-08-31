/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpos_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 04:57:03 by psmolich          #+#    #+#             */
/*   Updated: 2025/08/31 05:14:54 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstpos_s(t_list *lst, t_list *find)
{
	int	position;

	position = 0;
	while (lst != find)
	{
		position++;
		lst = lst->next;
	}
	return (position);
}
