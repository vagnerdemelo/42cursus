/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:37:58 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/04 21:36:15 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ck_spcl_char(char *c)
{
	if ((*c >= ' ' && *c <= '/') || (*c >= ':' && *c <= '@')
		|| (*c >= '[' && *c <= '`'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ck_chars(char *c)
{
	if ((*c >= 'a') && (*c <= 'z'))
		return (1);
	else if ((*c >= 'A') && (*c <= 'Z'))
		return (2);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	char_a_z;
	int	char_spcl;

	c = 0;
	while (str[c] != '\0')
	{
		char_a_z = ck_chars(&str[c]);
		char_spcl = ck_spcl_char(&str[c - 1]);
		if (char_a_z == 2)
		{
			str[c] += 'a' - 'A';
		}
		else if (char_a_z == 1 && char_spcl == 1)
		{
			str[c] -= 'a' - 'A';
		}
		c++;
	}
	if (((str[0] >= 'a') && (str[0] <= 'z'))
		|| (((str[0] >= 'A') && (str[0] <= 'Z'))))
		str[0] -= 'a' - 'A';
	return (str);
}

/*int main()
{
	char 	str[] = "   hello";
	
	printf("Before: %s\n", str);
	printf("After:  %s\n", ft_strcapitalize(str));
	return (0);
}
*/
/*int c;

	c = 0;

	while (str[c] != '\0')
	{
		printf("Char:  %c\n", str[c]);
		printf("Index: %d\n", c);
		printf("Index anterior: %c\n", str[c - 1]);
		c++;
	}
*/