/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:13:10 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 17:13:11 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*aux;

	i = 0;
	aux = lst;
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
