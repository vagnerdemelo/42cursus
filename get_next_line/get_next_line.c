/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:04:25 by vade-mel          #+#    #+#             */
/*   Updated: 2025/09/11 21:05:31 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	if (!s)
		return (NULL);
	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_buffer_fail(char **p_acum, char *buf)
{
	free(*p_acum);
	free(buf);
	*p_acum = NULL;
	return (NULL);
}

char	*ft_concat_buffer(char *curr, char *buf)
{
	char	*new_acum;

	if (!curr)
		new_acum = ft_strdup(buf);
	else
		new_acum = ft_strjoin(curr, buf);
	free(curr);
	free(buf);
	return (new_acum);
}

char	*get_next_line(int fd)
{
	static char	*acum;
	char		*buf;
	int			b_read;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE < 0)
		return (NULL);
	while (!ft_strchr(acum, '\n'))
	{
		buf = malloc((BUFFER_SIZE + 1) * (sizeof(char)));
		if (!buf)
			return (ft_buffer_fail(&acum, buf));
		b_read = read(fd, buf, BUFFER_SIZE);
		if (b_read < 0)
			return (ft_buffer_fail(&acum, buf));
		if (b_read == 0)
		{
			free(buf);
			break ;
		}
		buf[b_read] = '\0';
		acum = ft_concat_buffer(acum, buf);
		if (!acum)
			return (NULL);
	}
	return (ft_extract_line(&acum));
}

/*#include <fcntl.h>

int	main(void)
{
	int	fd = open("test.txt", O_RDONLY);
	char	*res;
	res = get_next_line(fd);
	printf("result: %s", res);

	// int i = 1;
	// while (i <= 3)
	// {
	// 	res = get_next_line(fd);
	// 	printf("result: %s", res);
	// 	i++;
	// }
	// while ((res = get_next_line(fd)))
	// 	printf("result: %s", res);
	// close(fd);
	return (0);
}
*/