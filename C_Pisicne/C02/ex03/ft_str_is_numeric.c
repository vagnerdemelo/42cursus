/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:15:44 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/03 21:26:53 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int main()
{
	char	str[] = "00165150150605050505054  	";
	int	alpha;

	alpha = ft_str_is_numeric(str);

	printf("Alpha:\t %d\n", alpha);
	return (0);
}
*/