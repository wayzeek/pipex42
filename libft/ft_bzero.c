/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:57:47 by vcart             #+#    #+#             */
/*   Updated: 2022/11/08 14:57:50 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*str;

	count = 0;
	str = (char *)s;
	while (count < n)
	{
		str[count] = '\0';
		count++;
	}
}
