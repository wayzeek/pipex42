/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:46:26 by vcart             #+#    #+#             */
/*   Updated: 2022/11/07 15:57:01 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str);

static int	is_ws(char c)
{
	if (c == ' ' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\n' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

static int	ft_check_overflow(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

static long long int	ft_conv(long long int res)
{
	if (res > INT_MAX)
		return (res - LLONG_MAX - 1);
	else if (res < INT_MIN)
		return (res - LLONG_MIN);
	else
		return (res);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				sign;
	int				i;

	i = 0;
	result = 0;
	sign = 1;
	while (is_ws(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result != ((result * 10 + (str[i] - 48)) / 10))
			return (ft_check_overflow(sign));
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)ft_conv(sign * result));
}
