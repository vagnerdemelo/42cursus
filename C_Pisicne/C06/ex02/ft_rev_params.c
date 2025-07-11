/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:47:38 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/15 17:55:37 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, &*str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	count;

	if (argc != 1)
	{
		count = argc - 1;
		while (count > 0)
		{
			ft_putstr(argv[count]);
			write (1, "\n", 1);
			count--;
		}
		return (0);
	}
}
