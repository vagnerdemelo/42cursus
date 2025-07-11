/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:37:47 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/04 16:35:12 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int main()
{
	char	str[] = "ASDSADaA";
	int	alpha;

	alpha = ft_str_is_uppercase(str);

	printf("Str:\t %s\n", str);
	printf("Alpha:\t %d\n", alpha);
	return (0);
}
*/