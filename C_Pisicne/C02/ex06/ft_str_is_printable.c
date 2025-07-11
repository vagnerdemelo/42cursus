/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:38:59 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/04 16:49:17 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int main()
{	char	str[] = "\a";
	int	alpha;

	alpha = ft_str_is_printable(str);

	printf("Aplha: %d", alpha);
	return 0;
}
*/