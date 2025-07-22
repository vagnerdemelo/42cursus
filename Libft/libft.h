/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:20:35 by vade-mel          #+#    #+#             */
/*   Updated: 2025/07/21 21:26:43 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isalnum(char c);
int			ft_isalpha(char c);
int			ft_isascii(int c);
int			ft_isdigit(char c);
int			ft_isprint(char c);
size_t		ft_strlen(char *s);

#endif