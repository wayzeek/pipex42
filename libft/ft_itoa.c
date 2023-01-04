/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:11:27 by vcart             #+#    #+#             */
/*   Updated: 2022/11/14 14:14:29 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	long	nb;

	nb = (long)n;
	i = intlen(nb);
	if (nb == 0)
		i = 1;
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return (0);
	result[i] = 0;
	if (nb == 0)
		result[0] = '0';
	else if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		result[--i] = nb % 10 + '0';
		nb /= 10;
	}
	return (result);
}
