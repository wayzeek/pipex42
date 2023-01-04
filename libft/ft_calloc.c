/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <vcart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:24:50 by vcart             #+#    #+#             */
/*   Updated: 2022/11/23 15:14:12 by vcart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size);

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	i;

	i = 0;
	if (size && SIZE_MAX / size < count)
		return (NULL);
	result = malloc(size * count);
	if (!(result))
		return (0);
	ft_bzero(result, count * size);
	return (result);
}
