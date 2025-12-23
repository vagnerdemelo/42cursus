/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_min_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:12:48 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 17:12:49 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_get_min_value(t_list *lst)
{
	t_list	*min;

	min = NULL;
	while (lst && lst->content == NULL)
		lst = lst->next;
	if (lst)
		min = lst;
	while (lst)
	{
		if (lst->content && *((int *)lst->content) < *((int *)min->content))
			min = lst;
		lst = lst->next;
	}
	return (min);
}
