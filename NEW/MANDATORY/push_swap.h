/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolich <psmolich@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:44:43 by psmolich          #+#    #+#             */
/*   Updated: 2025/09/06 11:16:52 by psmolich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define FAIL -1
# define SUCCESS 1

typedef struct s_list
{
	int				content;
	int				index;
	int				keep_LIS;
	t_list			*prev_LIS;
	struct s_list	*next;
}	t_list;

int		apply_instr(char *instr, t_list **stack_a, t_list **stack_b);
int		record_arg(int ac, char **av, t_list **stack_a);
int		ft_move(char *move, t_list **a, t_list **b);
void	ft_movetop(t_list **a, t_list **b, t_list *node_a, t_list *node_b);
void	ft_selectionsort(t_list **a, t_list **b, int size_a);
void	ft_radixsort(t_list **a, t_list **b, int size_a);
void	ft_lis(t_list **a, t_list **b);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstfree(t_list **lst);
int		ft_lstissorted_as(t_list *lst);
int		ft_lstissorted_des(t_list *lst);
t_list	*ft_lstlargest(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content, int index);
int		ft_lstindex(t_list *lst, t_list *node);
void	ft_lstprint(t_list *lst);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstsmallest(t_list *lst);

#endif