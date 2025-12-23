/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:53:46 by vade-mel          #+#    #+#             */
/*   Updated: 2025/12/23 16:53:48 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>

# include "libft.h"

// enums

enum e_fd
{
	READ_FD = 0,
	WRITE_FD
};

enum e_process
{
	FIRST = 0,
	MID,
	LAST
};

// structs

typedef struct s_path
{
	char	*home;
	char	**path;
}	t_path;

typedef struct s_pipe
{
	int	fd_pipe[2];
}	t_pipe;

typedef struct s_command
{
	int		i;
	int		fd_file_in;
	int		fd_file_out;
	int		num_cmds;
	int		*pid;
	t_pipe	*pipes;
	char	**argv;
	char	**envp;
	t_path	path;
}	t_command;

// Functions

// main
void	exec_process(t_command command, int type, int cmd_num);

// path
t_path	get_path_variables(char **envp);
char	*expand_path(char *cmd, t_path path);

// utils
void	close_pipe(t_pipe pipe_to_close);
void	set_dup2(int fd_in, int fd_out);
void	free_all(t_command command);

#endif
