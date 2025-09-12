/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:07:40 by vade-mel          #+#    #+#             */
/*   Updated: 2025/09/11 21:07:41 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_print_uns(n / 10);
	count += ft_print_char((n % 10) + '0');
	return (count);
}
