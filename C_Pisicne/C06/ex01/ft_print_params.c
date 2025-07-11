/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:44:00 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/15 17:46:57 by vade-mel         ###   ########.fr       */
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

	if (argc)
	{
		count = 1;
		while (count < argc)
		{
			ft_putstr(argv[count]);
			write (1, "\n", 1);
			count++;
		}
		return (0);
	}
}
