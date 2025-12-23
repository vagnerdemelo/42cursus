/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:57:17 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:57:19 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dst;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	if (size <= size_dst)
		return (size + size_src);
	size -= size_dst;
	ft_strlcpy(dst + size_dst, src, size);
	return (size_src + size_dst);
}
