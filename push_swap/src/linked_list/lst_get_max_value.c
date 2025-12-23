/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_max_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:12:55 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 17:12:57 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_get_max_value(t_list *lst)
{
	t_list	*max;

	max = NULL;
	while (lst && lst->content == NULL)
		lst = lst->next;
	if (lst)
		max = lst;
	while (lst)
	{
		if (lst->content && *((int *)lst->content) > *((int *)max->content))
			max = lst;
		lst = lst->next;
	}
	return (max);
}
