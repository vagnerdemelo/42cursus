/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:24:28 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/03 21:37:13 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int main()
{
	char	str[] = "";
	int	alpha;

	alpha = ft_str_is_lowercase(str);

	printf("Str:\t %s\n", str);
	printf("Alpha:\t %d\n", alpha);
	return (0);
}
*/