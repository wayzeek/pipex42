/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:03:35 by vcart             #+#    #+#             */
/*   Updated: 2022/11/14 14:12:24 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

static int	contains(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*trim(char *str, int start, int end)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (end - start) + 2);
	if (!result)
		return (0);
	i = 0;
	while (start <= end)
	{
		result[i] = str[start];
		start++;
		i++;
	}
	result[i] = 0;
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_start;
	int		i_end;
	char	*str;
	char	*charset;
	char	*result;

	if (s1)
	{
		if (!set || ft_strlen(s1) == 0)
			return (ft_strdup(s1));
		i_start = 0;
		i_end = ft_strlen(s1) - 1;
		str = (char *)s1;
		charset = (char *)set;
		while (str[i_start] && contains(charset, str[i_start]))
			i_start++;
		while (i_end > 0 && contains(charset, str[i_end]))
			i_end--;
		if (i_end - i_start < 0)
			return (ft_strdup(""));
		result = trim(str, i_start, i_end);
		return (result);
	}
	return (0);
}
