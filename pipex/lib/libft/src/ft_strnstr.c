/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:57:49 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:57:50 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i_str;
	size_t	i_to_find;

	i_str = 0;
	i_to_find = 0;
	if (!str || !to_find)
		return (NULL);
	if (!to_find[0])
		return ((char *) str);
	while (str[i_str] && to_find[i_to_find] && i_str < n)
	{
		while (i_str + i_to_find < n && to_find[i_to_find]
			&& str[i_to_find + i_str] == to_find[i_to_find])
			i_to_find++;
		if (!to_find[i_to_find])
			return (((char *) str) + i_str);
		i_to_find = 0;
		i_str++;
	}
	return (NULL);
}
