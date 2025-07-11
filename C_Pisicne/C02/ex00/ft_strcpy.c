/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:43:51 by vade-mel          #+#    #+#             */
/*   Updated: 2025/07/11 17:45:17 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}


/*int main()
{
	char	source[] = "Source!";
	char	destiny[] = "Destination";
	char	*dest;

	printf("Antes da cópia\n\tSource: %s\n\tDestiny: %s\n", source, destiny);

	dest = ft_strcpy(destiny, source);

	printf("Depois da cópia\n\tSource: %s\n\tDestiny: %s", source, dest);

	return (0);
}
*/
