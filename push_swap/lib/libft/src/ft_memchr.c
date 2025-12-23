/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:55:12 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:55:14 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *) s;
	if (!s)
		return (NULL);
	while (i < n && mem[i] != (unsigned char) c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *) s + i);
}
