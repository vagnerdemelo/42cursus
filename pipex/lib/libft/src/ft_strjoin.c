/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:57:11 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:57:13 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_all;
	char	*join;

	size_all = ft_strlen(s1) + ft_strlen(s2);
	join = 0;
	size_all++;
	join = (char *) malloc(size_all);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, size_all);
	ft_strlcat(join, s2, size_all);
	return (join);
}
