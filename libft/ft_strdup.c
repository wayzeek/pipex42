/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:50:27 by vcart             #+#    #+#             */
/*   Updated: 2022/11/09 08:50:29 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1);

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s1_copy;
	char	*dest;

	i = 0;
	s1_copy = (char *)s1;
	dest = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!(dest))
		return (0);
	while (s1_copy[i])
	{
		dest[i] = s1_copy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
