/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:56:35 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/03 21:23:58 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((src[count] != '\0') && (count < n))
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*int main()
{
	char	src[] = "Inicio";
	char	dest[] = "Destino";
	unsigned int	n;

	n = 5;
	printf("Antes\n\tsrc: %s\n\tdes: %s\n", src, dest);

	ft_strncpy(dest, src, n);

	printf("Depois\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
*/