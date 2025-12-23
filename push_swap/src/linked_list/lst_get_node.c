/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:12:42 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 17:12:44 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*lst_get_node(t_list *lst, int index)
{
	int		i;
	t_list	*aux;

	i = 0;
	aux = lst;
	if (index < 0)
		return (NULL);
	while (aux && i < index)
	{
		aux = aux->next;
		i++;
	}
	return (aux);
}
