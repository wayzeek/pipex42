/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:42:07 by vcart             #+#    #+#             */
/*   Updated: 2022/11/14 14:13:43 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pre;
	char	*post;
	char	*result;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		i = -1;
		pre = (char *)s1;
		post = (char *)s2;
		result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
		if (!(result))
			return (0);
		while (pre[++i])
			result[i] = pre[i];
		j = -1;
		while (post[++j])
			result[i++] = post[j];
		result[i] = 0;
		return (result);
	}
	return (0);
}
