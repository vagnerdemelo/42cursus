/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:39:51 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/11 16:51:54 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (1)
	{
		if (s1[count] == '\0' && s2[count] == '\0')
			return (0);
		else if ((s1[count] < s2[count]) || (s1[count] > s2[count]))
			return (s1[count] - s2[count]);
		count++;
	}
}

/*int	main(void)
{
	char	s1[] = "abcde";
	char	s2[] = "abcd";
	int	result;

	result = ft_strcmp(s1, s2);

	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	printf("Result  : %d\n", result);

	return (0);
}*/
