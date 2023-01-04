/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <vcart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:30:22 by vcart             #+#    #+#             */
/*   Updated: 2023/01/04 13:44:51 by vcart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

#include <stdio.h>

char	*get_binary_path(char *cmd)
{
	if (access(ft_strjoin("/usr/bin/", cmd), F_OK | X_OK) == 0)
		return (ft_strjoin("/usr/bin/", cmd));
	else if (access(ft_strjoin("/bin/", cmd), F_OK | X_OK) == 0)
		return (ft_strjoin("/bin/", cmd));
	else if (access(ft_strjoin("/sbin/", cmd), F_OK | X_OK) == 0)
		return (ft_strjoin("/sbin/", cmd));
	return (0);
}
