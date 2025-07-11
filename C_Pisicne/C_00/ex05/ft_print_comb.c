/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:52:24 by vade-mel          #+#    #+#             */
/*   Updated: 2025/05/29 19:29:57 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	out_stream(char a)
{
	write(1, &a, 1);
}

void	nums(char x, char y, char z)
{
	out_stream(x);
	out_stream(y);
	out_stream(z);
	if (!(x == '7' && y == '8' && z == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		y = x +1;
		while (y <= '8')
		{	
			z = y + 1;
			while (z <= '9')
			{
				nums(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

/*int main(void)
{
	ft_print_comb();
	return 0;
}
*/
