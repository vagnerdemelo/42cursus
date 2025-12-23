/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:56:35 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:56:37 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_all(int fd)
{
	int		chars_readed;
	char	*temp_buffer;
	char	*file_string;
	char	*aux;

	chars_readed = BUFFER_SIZE;
	temp_buffer = (char *) malloc((BUFFER_SIZE + 1));
	file_string = ft_strdup("");
	while (chars_readed == BUFFER_SIZE)
	{
		chars_readed = read(fd, temp_buffer, BUFFER_SIZE);
		temp_buffer[chars_readed] = '\0';
		aux = file_string;
		file_string = ft_strjoin(file_string, temp_buffer);
		free(aux);
	}
	free(temp_buffer);
	return (file_string);
}
