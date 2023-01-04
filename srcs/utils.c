/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <vcart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:30:22 by vcart             #+#    #+#             */
/*   Updated: 2023/01/04 16:55:41 by vcart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

#include <stdio.h>

char	**get_env_path(char **envp)
{
	int	i;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH", 4) == 0)
			return (ft_split(ft_strdup(envp[i] + 5), ':'));
		i++;
	}
	return (NULL);
}

char	*get_binary_path(char *cmd, char **envp)
{
	char	**path_list;
	char	*path;
	int		i;

	path_list = get_env_path(envp);
	i = 0;
	while (path_list[i])
	{
		path = ft_strjoin(path_list[i], "/");
		if (access(ft_strjoin(path, cmd), F_OK | X_OK) == 0)
			return (ft_strjoin(path, cmd));
		i++;
	}
	return (0);
}
