/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:34:50 by vade-mel          #+#    #+#             */
/*   Updated: 2025/07/10 20:40:54 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	count;

	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			ft_putstr(argv[count]);
			ft_putchar('\n');
			count++;
		}
		return (0);
	}
	return (0);
}
