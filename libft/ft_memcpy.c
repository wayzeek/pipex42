/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:08:47 by vcart             #+#    #+#             */
/*   Updated: 2022/11/14 14:14:01 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*ndst;
	const char	*nsrc;

	count = 0;
	if (!dst && !src)
		return (NULL);
	ndst = (char *)dst;
	nsrc = (const char *)src;
	while (count < n)
	{
		ndst[count] = nsrc[count];
		count++;
	}
	return (dst);
}
