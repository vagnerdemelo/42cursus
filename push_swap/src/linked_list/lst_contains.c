/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_contains.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:13:05 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 17:13:06 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_contains(t_list *lst, int num)
{
	while (lst)
	{
		if (lst->content && *((int *) lst->content) == num)
			return (1);
		lst = lst->next;
	}
	return (0);
}
