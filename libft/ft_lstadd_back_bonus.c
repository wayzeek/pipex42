/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:39:29 by vcart             #+#    #+#             */
/*   Updated: 2022/11/15 15:39:31 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*elt;

	if (new)
	{
		if (!(*lst))
		{
			*lst = new;
			return ;
		}
		elt = ft_lstlast(*lst);
		elt->next = new;
	}
}
