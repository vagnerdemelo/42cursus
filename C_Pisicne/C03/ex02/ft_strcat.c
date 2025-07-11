/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:11:14 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/11 17:49:39 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	count;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	count = 0;
	while (src[count] != '\0')
	{
		dest[len] = src[count];
		len++;
		count++;
	}
	dest[len] = '\0';
	return (dest);
}
