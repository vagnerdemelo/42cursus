/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:04:33 by vade-mel          #+#    #+#             */
/*   Updated: 2025/09/11 21:04:41 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_extract_return(char **p_acum)
{
	char	*acum;

	acum = *p_acum;
	if (acum && *acum != '\0')
	{
		*p_acum = NULL;
		return (acum);
	}
	free(acum);
	*p_acum = NULL;
	return (NULL);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	i;
	char	*res;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = (char *)malloc(l1 + l2 + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s1 && i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	while (s2 && i < l1 + l2)
	{
		res[i] = s2[i - l1];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (s_len - start < len)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

char	*ft_extract_line(char **p_acum)
{
	char	*nl_pos;
	char	*line;
	char	*new_acum;
	char	*acum;

	acum = *p_acum;
	nl_pos = ft_strchr(acum, '\n');
	if (nl_pos)
	{
		line = ft_substr(acum, 0, nl_pos - acum + 1);
		new_acum = ft_strdup(nl_pos + 1);
		if (!line || !new_acum)
		{
			free(line);
			free(new_acum);
			free(acum);
			*p_acum = NULL;
			return (NULL);
		}
		free(acum);
		*p_acum = new_acum;
		return (line);
	}
	return (ft_extract_return(p_acum));
}
