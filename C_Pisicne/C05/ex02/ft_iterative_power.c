/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:06:12 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/15 16:07:40 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	potencial;

	potencial = 1;
	count = 0;
	if (power < 0)
		return (0);
	while (count < power)
	{
		potencial *= nb;
		count++;
	}
	return (potencial);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(2, 3));
	return (0);
}
*/