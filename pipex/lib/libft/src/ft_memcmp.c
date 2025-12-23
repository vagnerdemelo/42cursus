/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:55:17 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:55:19 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*mem_s1;
	unsigned char	*mem_s2;

	i = 0;
	mem_s1 = (unsigned char *) s1;
	mem_s2 = (unsigned char *) s2;
	if (!n)
		return (0);
	while (i < n - 1 && mem_s1[i] == mem_s2[i])
		i++;
	return (mem_s1[i] - mem_s2[i]);
}
