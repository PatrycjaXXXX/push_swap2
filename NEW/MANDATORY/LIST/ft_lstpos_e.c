/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpos_e.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 04:54:06 by psmolich          #+#    #+#             */
/*   Updated: 2025/08/31 05:30:20 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstpos_e(t_list *lst, t_list *find)
{
	int	position;

	position = ft_lstsize(lst) - ft_lstpos_s(lst, find) - 1;
	return (position);
}
