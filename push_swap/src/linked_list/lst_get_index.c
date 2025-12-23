/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:13:00 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 17:13:01 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_get_index(t_list *lst, t_list *node)
{
	int		i;
	int		num;
	t_list	*aux;

	i = 0;
	num = *((int *) node->content);
	aux = lst;
	while (aux)
	{
		if (aux->content && *((int *)(aux->content)) == num)
			break ;
		aux = aux->next;
		i++;
	}
	return (i);
}
