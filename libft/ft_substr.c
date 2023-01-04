/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:08:58 by vcart             #+#    #+#             */
/*   Updated: 2022/11/12 11:09:31 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*result;

	if (s)
	{
		str = (char *)s;
		if (start >= ft_strlen(s))
			return (ft_strdup(""));
		if (len > ft_strlen(s))
			len = ft_strlen(s);
		result = malloc(sizeof(char) * len + 1);
		if (!(result))
			return (NULL);
		ft_strlcpy(result, &str[start], len + 1);
		result[len] = 0;
		return (result);
	}
	return (0);
}
