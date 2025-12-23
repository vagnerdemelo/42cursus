/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:58:15 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:58:17 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size_s;
	size_t	size_new;
	char	*new;

	size_s = ft_strlen(s);
	if (start >= size_s)
		size_new = 0;
	else
	{
		size_s = ft_strlen(s + start);
		if (size_s >= len)
			size_new = len;
		else
			size_new = size_s;
	}
	new = (char *) malloc(size_new + 1);
	if (!new)
		return (NULL);
	if (size_new == 0)
		new[0] = '\0';
	else
		ft_strlcpy(new, s + start, size_new + 1);
	return (new);
}
