/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:55:23 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:55:24 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*mem_src;
	char	*mem_dst;

	i = 0;
	mem_src = (char *) src;
	mem_dst = (char *) dest;
	if (!dest || !src)
		return (dest);
	while (i < n)
	{
		mem_dst[i] = mem_src[i];
		i++;
	}
	return (dest);
}
