/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:13:23 by vcart             #+#    #+#             */
/*   Updated: 2022/11/16 16:39:53 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	if (size == 0 || ft_strlen(str) == 0)
		return (NULL);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (NULL);
	while (str[i] != '\0' && i < size)
	{
		if (to_find[c] == str[i])
			c++;
		else if (to_find[c] != '\0')
		{
			i = i - c;
			c = 0;
		}
		if (to_find[c] == '\0')
			return ((char *)&str[i - c + 1]);
		i++;
	}
	return (NULL);
}
