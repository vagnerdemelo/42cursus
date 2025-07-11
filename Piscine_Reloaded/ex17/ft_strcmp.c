/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:39:45 by vade-mel          #+#    #+#             */
/*   Updated: 2025/07/10 19:40:41 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
