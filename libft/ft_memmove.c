/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:56:16 by vcart             #+#    #+#             */
/*   Updated: 2022/11/12 10:56:21 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t len);

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	char		*dest;
	const char	*src;

	dest = (char *)s1;
	src = (const char *)s2;
	if (dest <= src)
		ft_memcpy(dest, src, len);
	else
	{
		while (len > 0)
		{
			dest[len - 1] = src[len - 1];
			len--;
		}
	}
	return (dest);
}
