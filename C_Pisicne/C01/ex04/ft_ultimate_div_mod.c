/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 01:16:34 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/01 15:39:05 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = aux / *b;
	*b = aux % *b;
}

/*int main()
{
	int a = 10;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	return 0;
}
*/