/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:49:49 by vcart             #+#    #+#             */
/*   Updated: 2022/11/07 15:38:12 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			count;

	count = 0;
	str = (unsigned char *) b;
	while (count < len)
	{
		str[count] = (unsigned char) c;
		count++;
	}
	return (b);
}
