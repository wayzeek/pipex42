/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:16:44 by vcart             #+#    #+#             */
/*   Updated: 2022/11/14 15:37:47 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (s)
	{
		i = 0;
		result = malloc(sizeof(char) * ft_strlen(s) + 1);
		if (!(result))
			return (0);
		while (s[i])
		{
			result[i] = (*f)(i, s[i]);
			i++;
		}
		result[i] = 0;
		return (result);
	}
	return (0);
}
