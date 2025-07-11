/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:29:27 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/04 17:34:08 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		c++;
	}
	return (str);
}

/*int main()
{	
	char 	str[] = "ABCDE";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strlowcase(str));
	return (0);
}
*/