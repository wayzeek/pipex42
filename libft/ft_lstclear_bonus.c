/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:48:08 by vcart             #+#    #+#             */
/*   Updated: 2022/11/15 15:48:09 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev;

	if (lst && del)
	{
		while (*lst)
		{
			prev = *lst;
			*lst = (*lst)->next;
			(*del)(prev->content);
			free(prev);
		}
	}
}
