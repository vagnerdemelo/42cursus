/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:54:17 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:54:19 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elem, size_t size)
{
	char	*mem;

	if ((num_elem * size) != 0 && (num_elem * size) / size != num_elem)
		return (NULL);
	mem = (char *) malloc(num_elem * size);
	if (mem != NULL)
		ft_bzero(mem, num_elem * size);
	return (mem);
}
