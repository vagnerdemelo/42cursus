/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:55:28 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:55:29 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*mem_src;
	char	*mem_dst;

	mem_src = (char *) src;
	mem_dst = (char *) dest;
	if (!dest || !src)
		return (dest);
	if (mem_dst > mem_src)
	{
		i = n + 1;
		while (--i > 0)
			mem_dst[i - 1] = mem_src[i - 1];
	}
	else
	{
		i = -1;
		while (++i < n)
			mem_dst[i] = mem_src[i];
	}
	return (dest);
}
