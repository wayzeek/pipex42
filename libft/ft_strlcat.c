/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:27:20 by vcart             #+#    #+#             */
/*   Updated: 2022/11/08 16:27:23 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	nb;
	size_t	i;
	size_t	i_dest;
	size_t	init_dest_size;

	if (dstsize == 0)
		return (ft_strlen(src));
	init_dest_size = ft_strlen(dst);
	if (dstsize <= init_dest_size)
		return (ft_strlen(src) + dstsize);
	i = 0;
	nb = dstsize - ft_strlen(dst) - 1;
	i_dest = ft_strlen(dst);
	while (i < nb && src[i])
	{
		dst[i_dest] = src[i];
		i++;
		i_dest++;
	}
	if (dstsize > 0)
		dst[i_dest] = '\0';
	return (init_dest_size + ft_strlen(src));
}
