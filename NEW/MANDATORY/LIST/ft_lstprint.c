/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:30:52 by psmolich          #+#    #+#             */
/*   Updated: 2025/08/30 17:06:13 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libft/libft.h"

void	ft_lstprint(t_list *lst)
{
	if (!lst)
	{
		ft_printf("[NULL]\n");
		return ;
	}
	ft_printf("[head]");
	while (lst)
	{
		ft_printf(" -> ");
		ft_printf("[%i]start: %i end: %i", lst->content, lst->index_start, lst->index_end);
		lst = lst->next;
	}
	ft_printf("\n");
}
