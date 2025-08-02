/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:20:35 by vade-mel          #+#    #+#             */
/*   Updated: 2025/08/01 22:02:33 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isalnum(char c);
int			ft_isalpha(char c);
int			ft_isascii(int c);
int			ft_atoi(char *str);
int			ft_isdigit(char c);
int			ft_isprint(char c);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
int			ft_toupper(int c);
int			ft_lower(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*memmove(void *dst, const void *src, size_t len);
void		*ft_calloc(size_t nmemb, size_t size);

char		*ft_strchr(const char *s, int c);
char		*ft_strdup(char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_itoa(int n);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dest, char *src, size_t size);

#endif