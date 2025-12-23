/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:11:49 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 17:11:50 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Swaps the first two nodes of a linked list.
 *
 * The first node becomes the second and the second node becomes the first.
 *
 * @param lst A pointer to a pointer to the linked list.
 */
static void	lst_swap(t_list **lst)
{
	int		lst_size;
	t_list	*first;
	t_list	*second;

	lst_size = ft_lstsize(*lst);
	if (lst_size >= 2)
	{
		first = *lst;
		second = (*lst)->next;
		first->next = second->next;
		second->next = first;
		*lst = second;
	}
}

void	sa(t_list **lst_a)
{
	write(1, "sa\n", 3);
	lst_swap(lst_a);
}

void	sb(t_list **lst_b)
{
	write(1, "sb\n", 3);
	lst_swap(lst_b);
}

void	ss(t_list **lst_a, t_list **lst_b)
{
	write(1, "ss\n", 3);
	lst_swap(lst_a);
	lst_swap(lst_b);
}
