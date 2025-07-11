/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:24:07 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/15 16:05:54 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (-1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(10));
	return (0);
}
*/