/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:27:22 by vade-mel          #+#    #+#             */
/*   Updated: 2025/06/15 17:43:15 by vade-mel         ###   ########.fr       */
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
	if (argc)
	{
		ft_putstr(argv[0]);
		write (1, "\n", 1);
		return (0);
	}
}
