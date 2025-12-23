/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:52:50 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:52:52 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	close_pipe(t_pipe pipe_to_close)
{
	close(pipe_to_close.fd_pipe[0]);
	close(pipe_to_close.fd_pipe[1]);
}

void	set_dup2(int fd_in, int fd_out)
{
	dup2(fd_in, STDIN_FILENO);
	dup2(fd_out, STDOUT_FILENO);
}

void	free_all(t_command command)
{
	free(command.pid);
	free(command.pipes);
	free(command.path.home);
	ft_free_split(command.path.path);
}
