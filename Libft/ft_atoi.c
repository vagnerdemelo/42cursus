/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:28:50 by vade-mel          #+#    #+#             */
/*   Updated: 2025/08/02 17:21:49 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*add verift more one signal. eg: ++42, --42, +-42 and -+42*/
int	ft_atoi(char *str)
{
	int	count;
	int	signal;
	int	res;

	count = 0;
	signal = 1;
	res = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			signal *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = (str[count] - '0') + (res * 10);
		count++;
	}
	return (res * signal);
}
