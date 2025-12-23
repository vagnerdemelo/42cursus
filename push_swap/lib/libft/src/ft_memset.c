/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:55:33 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:55:34 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (!s)
		return (s);
	mem = (char *) s;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (s);
}
