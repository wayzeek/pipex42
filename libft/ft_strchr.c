/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:42:52 by vcart             #+#    #+#             */
/*   Updated: 2022/11/08 16:42:54 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	character;
	char	*str;

	str = (char *)s;
	i = 0;
	character = (char)c;
	while (s[i])
	{
		if (str[i] == character)
			return (&str[i]);
		i++;
	}
	if (character == 0)
		return (&str[i]);
	return (0);
}
