/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:03:41 by vcart             #+#    #+#             */
/*   Updated: 2022/11/14 14:12:38 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	character;
	char	*str;

	str = (char *)s;
	i = (int)ft_strlen(str);
	character = (char)c;
	while (i >= 0)
	{
		if (str[i] == character)
			return (&str[i]);
		i--;
	}
	if (character == 0)
		return (&str[ft_strlen(str) + 1]);
	return (0);
}
