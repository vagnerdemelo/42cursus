/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:55:22 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/12 17:56:03 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	compare;

	count = 0;
	if (!(*to_find))
		return (str);
	while (str[count])
	{
		compare = 0;
		while (str[count + compare] == to_find[compare] && to_find[compare])
		{
			compare++;
		}
		if (!(to_find[compare]))
		{
			return (&str[count]);
		}
		count++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "42 é uma escola de programação.";
	char	to_find[] = "1";
	char	*result;

	result = ft_strstr(str, to_find);

	if (result)
		printf("%s\n", result);
	else
		printf("Sem correspondência.\n");
	return (0);
}
*/