/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:26:53 by vcart             #+#    #+#             */
/*   Updated: 2022/11/15 17:26:54 by vcart            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*prev;

	if (lst && del)
	{
		prev = lst;
		lst = lst->next;
		(*del)(prev->content);
		free(prev);
	}
}
