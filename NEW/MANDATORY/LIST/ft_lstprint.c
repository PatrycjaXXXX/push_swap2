/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:30:52 by psmolich          #+#    #+#             */
/*   Updated: 2025/08/30 20:46:40 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libft/libft.h"

void	ft_lstprint(t_list *lst, char c)
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
		if (c == 'c')
			ft_printf("[%b]", lst->content);
		else if (c == 's')
			ft_printf("[%i]start: %i", lst->content, lst->index_start);
		else if (c == 'e')
			ft_printf("[%i]start: %i end: %i", lst->content, lst->index_start, lst->index_end);
		lst = lst->next;
	}
	ft_printf("\n");
}
