/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:59:11 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/12 18:20:59 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				diff;

	count = 0;
	diff = 0;
	while ((count < n) && !diff && (s1[count] != '\0') && (s2[count] != '\0'))
	{
		diff = (unsigned char)s1[count] - (unsigned char)s2[count];
		count++;
	}
	if (count < n && !diff && (s1[count] == '\0' || s2[count] == '\0'))
		diff = (unsigned char)s1[count] - (unsigned char)s2[count];
	return (diff);
}

/*int	main(void)
{
	char	s1[] = "maçã";
	char	s2[] = "maça";

	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	printf("Result  : %d\n", ft_strncmp(s1, s2, 6));

	return (0);
}
*/
