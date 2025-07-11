/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:34:40 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/15 16:08:00 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1 && nb >= 0)
		return (1);
	while (nb > 0)
		result *= nb--;
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(10));
	return (0);
}
*/