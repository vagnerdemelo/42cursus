/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:55:20 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/03 21:26:56 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int main()
{
	char	str[] = "HelloWorld";
	int	alpha;

	alpha = ft_str_is_alpha(str);

	printf("Alpha:\t %d\n", alpha);
	return (0);
}
*/